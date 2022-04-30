#ifndef LAB07_PNR_H
#define LAB07_PNR_H

#include <QMainWindow>
#include <QTableWidget>
#include <QPlainTextEdit>
#include <QListWidget>

class Queue_PNR
{
private:
    Queue_PNR* Head = this;
    Queue_PNR* Tail = this;

    QString *Name = new QString("NN");
    double *Value = new double(0);

    Queue_PNR *Prev = nullptr;
public:
    Queue_PNR();
    Queue_PNR(double val);
    Queue_PNR(QString name, double val);
    Queue_PNR(const Queue_PNR &instance);
    ~Queue_PNR();

    double getValue() {return *Value;}
    QString getName() {return *Name;}
    Queue_PNR* getHead() {return Head;}
    Queue_PNR* getTail() {return Tail;}
    Queue_PNR* getPrev() {return Prev;}
    void setValue(double newVal) {*Value = newVal;}
    void setName(QString newName) {*Name = newName;}
    void setHead(Queue_PNR* newHead) {Head = newHead;}
    void setTail(Queue_PNR* newTail) {Tail = newTail;}
    void setPrev(Queue_PNR* newPrev) {Prev = newPrev;}

    bool isEmpty();
    int getAmmountOfElements();
    double getMaxValue();
    double getMinValue();
    double getArithmeticalMean();
    void clear();

    void operator+=(Queue_PNR* newElement);
    Queue_PNR* operator--();
    void operator*=(double scal);
    void operator=(Queue_PNR queue);

    friend void operator>>(QTableWidget &table, Queue_PNR *queue);
    friend void operator>>(QListWidget &list, Queue_PNR *queue);
    friend void operator<<(QTableWidget &table, Queue_PNR *queue);
    friend void operator<<(QListWidget &list, Queue_PNR *queue);
    friend void operator<<(QPlainTextEdit &edit, Queue_PNR *queue);
};

QT_BEGIN_NAMESPACE
namespace Ui { class Lab07_PNR; }
QT_END_NAMESPACE

class Lab07_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Lab07_PNR(QWidget *parent = nullptr);
    ~Lab07_PNR();

    Queue_PNR *queue = new Queue_PNR;
private slots:
    void on_btn_setRowCount_PNR_clicked();

    void on_btn_getFromTable_PNR_clicked();

    void on_btn_clear_PNR_clicked();

    void on_btn_copyAndPasteElem_PNR_clicked();

    void on_btn_ammount_PNR_clicked();

    void on_btn_delete_PNR_clicked();

    void on_btn_add_PNR_clicked();

    void on_btn_max_PNR_clicked();

    void on_btn_min_PNR_clicked();

    void on_btn_mean_PNR_clicked();

    void on_btn_multByVal_PNR_clicked();

    void on_btn_isEmpty_PNR_clicked();

    void on_btn_setListItem_PNR_clicked();

    void on_btn_setListItem_PNR_2_clicked();

    void on_btn_getFromList_PNR_clicked();

private:
    Ui::Lab07_PNR *ui;
};

void operator>>(QTableWidget &table, Queue_PNR *queue);
void operator>>(QListWidget &list, Queue_PNR *queue);
void operator<<(QTableWidget &table, Queue_PNR *queue);
void operator<<(QListWidget &list, Queue_PNR *queue);
void operator<<(QPlainTextEdit &edit, Queue_PNR *queue);
#endif // LAB07_PNR_H
