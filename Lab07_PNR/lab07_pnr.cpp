#include "lab07_pnr.h"
#include "ui_lab07_pnr.h"

Lab07_PNR::Lab07_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lab07_PNR)
{
    ui->setupUi(this);
}

Lab07_PNR::~Lab07_PNR()
{
    delete ui;
}

Queue_PNR::Queue_PNR()
{
    if(Head == nullptr)
    {
        Head = this;
    }
    if(Tail == nullptr)
    {
        Tail = this;
    }
}

Queue_PNR::Queue_PNR(double val)
{
    *Value = val;
}

Queue_PNR::Queue_PNR(QString name, double val)
{
    *Value = val;
    *Name = name;
}

Queue_PNR::Queue_PNR(const Queue_PNR &instance)
{
    *Value = *(instance.Value);
    *Name = *(instance.Name);
}

Queue_PNR::~Queue_PNR()
{
}

bool Queue_PNR::isEmpty()
{
    if(this->getAmmountOfElements() == 1 && this->getValue() == 0 && this->getName() == "NN")
    {
        return true;
    } else
    {
        return false;
    }
}

void Queue_PNR::operator+=(Queue_PNR *newElement)
{
    newElement->Head=Head;
    Tail->Prev=newElement;
    Tail = newElement;
    newElement->Tail=Tail;
}

Queue_PNR* Queue_PNR::operator--()
{
    Queue_PNR *elementToDelete = this->getHead();
    Queue_PNR *currentPtr = this->getHead();
    Queue_PNR *newHead = (this->getHead())->getPrev();
    while(currentPtr != nullptr)
    {
        currentPtr->setHead(newHead);
        currentPtr=currentPtr->getPrev();
    }

    delete elementToDelete;
    return newHead;
}

void Queue_PNR::operator*=(double scal)
{
    Queue_PNR *currentElement = Head;
    while(currentElement != nullptr)
    {
        *(currentElement->Value) *= scal;
        currentElement = currentElement->Prev;
    }

}

void Queue_PNR::operator=(Queue_PNR queue)
{
    Name = queue.Name;
    Value = queue.Value;
}

int Queue_PNR::getAmmountOfElements()
{
    int iter{0};
    Queue_PNR* currentPointer = this;

    while(currentPointer != nullptr)
    {
        iter++;
        currentPointer=currentPointer->Prev;
    }

    return iter;
}

double Queue_PNR::getMaxValue()
{
    Queue_PNR* currentPointer = this;
    double maxVal = this->getValue();

    while(currentPointer != nullptr)
    {
        if(currentPointer->getValue() > maxVal)
        {
            maxVal = currentPointer->getValue();
        }
        currentPointer=currentPointer->Prev;
    }

    return maxVal;
}

double Queue_PNR::getMinValue()
{
    Queue_PNR* currentPointer = this;
    double minVal = this->getValue();

    while(currentPointer != nullptr)
    {
        if(currentPointer->getValue() < minVal)
        {
            minVal = currentPointer->getValue();
        }
        currentPointer=currentPointer->Prev;
    }

    return minVal;
}

double Queue_PNR::getArithmeticalMean()
{
    Queue_PNR* currentPointer = this->getHead();
    double mean{0};

    while(currentPointer != nullptr)
    {
        mean += currentPointer->getValue();
        currentPointer=currentPointer->getPrev();
    }

    mean /= this->getHead()->getAmmountOfElements();

    return mean;
}

void Queue_PNR::clear()
{
    if(this->getAmmountOfElements() > 1)
    {
        Queue_PNR* currentPointer = this->Prev;
        Queue_PNR* prevPointer = this->Prev->Prev;

        while(currentPointer != nullptr)
        {
            delete currentPointer;
            currentPointer = prevPointer;
            if(prevPointer != nullptr)
            {
                prevPointer = prevPointer->Prev;
            }
        }
        this->setTail(this->Head);
        this->setValue(0);
        this->setName("NN");
        this->setPrev(nullptr);
    } else
    {
        this->setValue(0);
        this->setName("NN");
    }
}

void operator<<(QTableWidget &table, Queue_PNR *queue)
{
    Queue_PNR *currentElement = queue;
    int iter {0};
    table.setColumnCount(2);
    int rowCount{queue->getAmmountOfElements()};
    table.setRowCount(rowCount);
    while(currentElement != nullptr)
    {
        QTableWidgetItem *newItem1 = new QTableWidgetItem;
        QTableWidgetItem *newItem2 = new QTableWidgetItem;
        newItem1->setText(QString::number(currentElement->getValue()));
        newItem2->setText(currentElement->getName());
        table.setItem(iter, 0, newItem1);
        table.setItem(iter, 1, newItem2);
        currentElement=currentElement->getPrev();
        iter++;
    }
}

void operator>>(QListWidget &list, Queue_PNR *queue)
{
    Queue_PNR *currentElement = queue;

    queue->clear();
    int iter{0};
    while(iter < list.count())
    {
        QString itemText{list.item(iter)->text()};
        QStringList strList = itemText.split(" ");
        if(iter == 0)
        {

            if(!strList.at(0).isEmpty())
            {
                currentElement->setValue(strList.at(0).toDouble());
            } else
            {
                currentElement->setValue(0);
            }
            if(!strList.at(1).isEmpty())
            {
                currentElement->setName(strList.at(1));
            } else
            {
                currentElement->setName("NN");
            }
        } else
        {
            Queue_PNR* newElement = new Queue_PNR;
            if(!strList.at(0).isEmpty())
            {
                newElement->setValue(strList.at(0).toDouble());
            } else
            {
                newElement->setValue(0);
            }
            if(!strList.at(1).isEmpty())
            {
                newElement->setName(strList.at(1));
            } else
            {
                newElement->setName("NN");
            }
            *queue += newElement;
        }
        iter++;
    }
}
void operator>>(QTableWidget &table, Queue_PNR *queue)
{
    Queue_PNR *currentElement = queue;
    queue->clear();
    int iter{0};
    while(iter < table.rowCount())
    {
        if(iter == 0)
        {
            if(!table.item(iter, 0)->text().isEmpty())
            {
                currentElement->setValue(table.item(iter, 0)->text().toDouble());
            } else
            {
                currentElement->setValue(0);
            }
            if(!table.item(iter, 1)->text().isEmpty())
            {
                currentElement->setName(table.item(iter, 1)->text());
            } else
            {
                currentElement->setName("NN");
            }
        } else
        {
            Queue_PNR* newElement = new Queue_PNR;
            if(!table.item(iter, 0)->text().isEmpty())
            {
                newElement->setValue(table.item(iter, 0)->text().toDouble());
            } else
            {
                newElement->setValue(0);
            }
            if(!table.item(iter, 1)->text().isEmpty())
            {
                newElement->setName(table.item(iter, 1)->text());
            } else
            {
                newElement->setName("NN");
            }
            *queue += newElement;
        }
        iter++;
    }
}
void operator<<(QListWidget &list, Queue_PNR *queue)
{
    Queue_PNR *currentElement = queue;
    int iter {0};
    list.clear();
    while(currentElement != nullptr)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        QString text = QString::number(currentElement->getValue()) + " " + currentElement->getName();
        newItem->setText(text);
        list.insertItem(iter, newItem);
        currentElement=currentElement->getPrev();
        iter++;
    }
}
void operator<<(QPlainTextEdit &edit, Queue_PNR *queue)
{
    Queue_PNR *currentElement = queue;
    int iter {0};
    edit.clear();
    while(currentElement != nullptr)
    {
        QString text = QString::number(currentElement->getValue()) + " " + currentElement->getName() + "\n";
        edit.appendPlainText(text);
        currentElement=currentElement->getPrev();
        iter++;
    }
}



void Lab07_PNR::on_btn_setRowCount_PNR_clicked()
{
    if(ui->spinBox_row_PNR->value() < ui->tableSet_PNR->rowCount())
    {
        for(int i{ui->spinBox_row_PNR->value()}; i < ui->tableSet_PNR->rowCount(); i++)
        {
            QTableWidgetItem* itemToDelete1{ui->tableSet_PNR->item(i, 0)};
            QTableWidgetItem* itemToDelete2{ui->tableSet_PNR->item(i, 1)};

            delete itemToDelete1;
            delete itemToDelete2;
        }
        ui->tableSet_PNR->setRowCount(ui->spinBox_row_PNR->value());
        ui->tableSet_PNR->setColumnCount(2);
    } else
    {
        int initialRowCount{ui->tableSet_PNR->rowCount()};
        ui->tableSet_PNR->setRowCount(ui->spinBox_row_PNR->value());
        ui->tableSet_PNR->setColumnCount(2);
        for(int i{initialRowCount}; i < ui->tableSet_PNR->rowCount(); i++)
        {
            QTableWidgetItem *newItem1 = new QTableWidgetItem;
            QTableWidgetItem *newItem2 = new QTableWidgetItem;

            ui->tableSet_PNR->setItem(i, 0, newItem1);
            ui->tableSet_PNR->setItem(i, 1, newItem2);
            ui->tableSet_PNR->item(i, 0)->setText(" ");
            ui->tableSet_PNR->item(i, 1)->setText(" ");
        }
    }
}


void Lab07_PNR::on_btn_getFromTable_PNR_clicked()
{
    *ui->tableSet_PNR >> queue;
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_clear_PNR_clicked()
{
    queue->clear();
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_copyAndPasteElem_PNR_clicked()
{
    Queue_PNR *elem1, *elem2;

    elem1 = queue;
    elem2 = queue;

    for(int i{0}; i < ui->spinBox_first_PNR->value()-1; i++)
    {
        if(i == queue->getAmmountOfElements())
        {
            break;
        }
        elem1=elem1->getPrev();
    }
    for(int i{0}; i < ui->spinBox_second_PNR->value()-1; i++)
    {
        if(i == queue->getAmmountOfElements())
        {
            break;
        }
        elem2=elem2->getPrev();
    }

    *elem2 = *elem1;
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_ammount_PNR_clicked()
{
    int ammount = queue->getAmmountOfElements();

    ui->lbl_ammountVal_PNR->setText(QString::number(ammount));
}


void Lab07_PNR::on_btn_delete_PNR_clicked()
{
    if(queue->getAmmountOfElements() > 1)
    {
        queue = queue->operator--();
    } else
    {
        queue->setName("NN");
        queue->setValue(0);
    }
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_add_PNR_clicked()
{
    Queue_PNR *newElement = new Queue_PNR;
    newElement->setName(ui->lineEdit_name_PNR->text());
    newElement->setValue(ui->lineEdit_value_PNR->text().toDouble());
    *queue += newElement;
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_max_PNR_clicked()
{
    ui->lbl_maxVal_PNR->setText(QString::number(queue->getMaxValue()));
}


void Lab07_PNR::on_btn_min_PNR_clicked()
{
    ui->lbl_minVal_PNR->setText(QString::number(queue->getMinValue()));
}


void Lab07_PNR::on_btn_mean_PNR_clicked()
{
    ui->lbl_meanVal_PNR->setText(QString::number(queue->getArithmeticalMean()));
}


void Lab07_PNR::on_btn_multByVal_PNR_clicked()
{
    double mult = ui->lineEdit_value_PNR->text().toDouble();
    (*queue)*=mult;
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}


void Lab07_PNR::on_btn_isEmpty_PNR_clicked()
{
    if(queue->isEmpty())
    {
        ui->lbl_isEmptyVal_PNR->setText("True");
    } else
    {
        ui->lbl_isEmptyVal_PNR->setText("False");
    }
}





void Lab07_PNR::on_btn_setListItem_PNR_clicked()
{
    QString itemText = ui->lineEdit_value_PNR->text() + " " + ui->lineEdit_name_PNR->text();
    QListWidgetItem *newItem = new QListWidgetItem;
    newItem->setText(itemText);
    int row = ui->listSet_PNR->count();
    ui->listSet_PNR->insertItem(row, newItem);
}


void Lab07_PNR::on_btn_setListItem_PNR_2_clicked()
{
    int row = ui->spinBox_rowInList_PNR->value();
    if(row < ui->listSet_PNR->count())
    {
        QListWidgetItem* itemToDelete = ui->listSet_PNR->takeItem(row);
        if(itemToDelete != nullptr)
        {
            delete itemToDelete;
        }
    }
}


void Lab07_PNR::on_btn_getFromList_PNR_clicked()
{
    *ui->listSet_PNR >> queue;
    *ui->table_PNR << queue;
    *ui->list_PNR << queue;
    *ui->textEdit_PNR << queue;
}

