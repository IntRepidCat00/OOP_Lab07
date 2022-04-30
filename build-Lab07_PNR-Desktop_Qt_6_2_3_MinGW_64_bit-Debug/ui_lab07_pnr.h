/********************************************************************************
** Form generated from reading UI file 'lab07_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB07_PNR_H
#define UI_LAB07_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab07_PNR
{
public:
    QWidget *centralwidget;
    QTableWidget *table_PNR;
    QListWidget *list_PNR;
    QPlainTextEdit *textEdit_PNR;
    QPushButton *btn_add_PNR;
    QPushButton *btn_clear_PNR;
    QPushButton *btn_delete_PNR;
    QPushButton *btn_ammount_PNR;
    QPushButton *btn_max_PNR;
    QPushButton *btn_min_PNR;
    QPushButton *btn_copyAndPasteElem_PNR;
    QTableWidget *tableSet_PNR;
    QListWidget *listSet_PNR;
    QLabel *lbl_setFromTable_PNR;
    QLabel *lbl_setFromList_PNR;
    QLabel *lbl_table_PNR;
    QLabel *lbl_list_PNR;
    QLabel *lbl_textEdit_PNR;
    QPushButton *btn_getFromTable_PNR;
    QPushButton *btn_getFromList_PNR;
    QPushButton *btn_mean_PNR;
    QLabel *lbl_value_PNR;
    QLineEdit *lineEdit_name_PNR;
    QLabel *lbl_name_PNR;
    QSpinBox *spinBox_first_PNR;
    QSpinBox *spinBox_second_PNR;
    QLabel *lbl_copyAndPaste_PNR;
    QLineEdit *lineEdit_value_PNR;
    QLabel *lbl_min_PNR;
    QLabel *lbl_max_PNR;
    QLabel *lbl_mean_PNR;
    QLabel *lbl_minVal_PNR;
    QLabel *lbl_maxVal_PNR;
    QLabel *lbl_meanVal_PNR;
    QPushButton *btn_setRowCount_PNR;
    QSpinBox *spinBox_row_PNR;
    QLabel *lbl_rowCount_PNR;
    QPushButton *btn_multByVal_PNR;
    QLabel *lbl_ammount_PNR;
    QLabel *lbl_ammountVal_PNR;
    QPushButton *btn_isEmpty_PNR;
    QLabel *lbl_isEmpty_PNR;
    QLabel *lbl_isEmptyVal_PNR;
    QPushButton *btn_setListItem_PNR;
    QPushButton *btn_setListItem_PNR_2;
    QSpinBox *spinBox_rowInList_PNR;
    QLabel *lbl_rowCount_PNR_2;

    void setupUi(QMainWindow *Lab07_PNR)
    {
        if (Lab07_PNR->objectName().isEmpty())
            Lab07_PNR->setObjectName(QString::fromUtf8("Lab07_PNR"));
        Lab07_PNR->resize(980, 694);
        centralwidget = new QWidget(Lab07_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        table_PNR = new QTableWidget(centralwidget);
        table_PNR->setObjectName(QString::fromUtf8("table_PNR"));
        table_PNR->setGeometry(QRect(10, 60, 311, 161));
        list_PNR = new QListWidget(centralwidget);
        list_PNR->setObjectName(QString::fromUtf8("list_PNR"));
        list_PNR->setGeometry(QRect(340, 60, 311, 161));
        textEdit_PNR = new QPlainTextEdit(centralwidget);
        textEdit_PNR->setObjectName(QString::fromUtf8("textEdit_PNR"));
        textEdit_PNR->setGeometry(QRect(660, 60, 311, 361));
        btn_add_PNR = new QPushButton(centralwidget);
        btn_add_PNR->setObjectName(QString::fromUtf8("btn_add_PNR"));
        btn_add_PNR->setGeometry(QRect(140, 470, 121, 61));
        btn_clear_PNR = new QPushButton(centralwidget);
        btn_clear_PNR->setObjectName(QString::fromUtf8("btn_clear_PNR"));
        btn_clear_PNR->setGeometry(QRect(10, 470, 121, 61));
        btn_delete_PNR = new QPushButton(centralwidget);
        btn_delete_PNR->setObjectName(QString::fromUtf8("btn_delete_PNR"));
        btn_delete_PNR->setGeometry(QRect(270, 470, 121, 61));
        btn_ammount_PNR = new QPushButton(centralwidget);
        btn_ammount_PNR->setObjectName(QString::fromUtf8("btn_ammount_PNR"));
        btn_ammount_PNR->setGeometry(QRect(400, 470, 121, 61));
        QFont font;
        font.setPointSize(9);
        btn_ammount_PNR->setFont(font);
        btn_max_PNR = new QPushButton(centralwidget);
        btn_max_PNR->setObjectName(QString::fromUtf8("btn_max_PNR"));
        btn_max_PNR->setGeometry(QRect(10, 540, 121, 61));
        btn_max_PNR->setFont(font);
        btn_min_PNR = new QPushButton(centralwidget);
        btn_min_PNR->setObjectName(QString::fromUtf8("btn_min_PNR"));
        btn_min_PNR->setGeometry(QRect(140, 540, 121, 61));
        btn_min_PNR->setFont(font);
        btn_copyAndPasteElem_PNR = new QPushButton(centralwidget);
        btn_copyAndPasteElem_PNR->setObjectName(QString::fromUtf8("btn_copyAndPasteElem_PNR"));
        btn_copyAndPasteElem_PNR->setGeometry(QRect(400, 540, 121, 61));
        btn_copyAndPasteElem_PNR->setFont(font);
        tableSet_PNR = new QTableWidget(centralwidget);
        tableSet_PNR->setObjectName(QString::fromUtf8("tableSet_PNR"));
        tableSet_PNR->setGeometry(QRect(10, 260, 311, 161));
        listSet_PNR = new QListWidget(centralwidget);
        listSet_PNR->setObjectName(QString::fromUtf8("listSet_PNR"));
        listSet_PNR->setGeometry(QRect(340, 260, 311, 161));
        lbl_setFromTable_PNR = new QLabel(centralwidget);
        lbl_setFromTable_PNR->setObjectName(QString::fromUtf8("lbl_setFromTable_PNR"));
        lbl_setFromTable_PNR->setGeometry(QRect(10, 230, 311, 31));
        QFont font1;
        font1.setPointSize(10);
        lbl_setFromTable_PNR->setFont(font1);
        lbl_setFromList_PNR = new QLabel(centralwidget);
        lbl_setFromList_PNR->setObjectName(QString::fromUtf8("lbl_setFromList_PNR"));
        lbl_setFromList_PNR->setGeometry(QRect(340, 230, 311, 31));
        lbl_setFromList_PNR->setFont(font1);
        lbl_table_PNR = new QLabel(centralwidget);
        lbl_table_PNR->setObjectName(QString::fromUtf8("lbl_table_PNR"));
        lbl_table_PNR->setGeometry(QRect(10, 20, 311, 31));
        lbl_table_PNR->setFont(font1);
        lbl_list_PNR = new QLabel(centralwidget);
        lbl_list_PNR->setObjectName(QString::fromUtf8("lbl_list_PNR"));
        lbl_list_PNR->setGeometry(QRect(340, 20, 311, 31));
        lbl_list_PNR->setFont(font1);
        lbl_textEdit_PNR = new QLabel(centralwidget);
        lbl_textEdit_PNR->setObjectName(QString::fromUtf8("lbl_textEdit_PNR"));
        lbl_textEdit_PNR->setGeometry(QRect(660, 20, 311, 31));
        lbl_textEdit_PNR->setFont(font1);
        btn_getFromTable_PNR = new QPushButton(centralwidget);
        btn_getFromTable_PNR->setObjectName(QString::fromUtf8("btn_getFromTable_PNR"));
        btn_getFromTable_PNR->setGeometry(QRect(140, 610, 121, 61));
        btn_getFromTable_PNR->setFont(font);
        btn_getFromList_PNR = new QPushButton(centralwidget);
        btn_getFromList_PNR->setObjectName(QString::fromUtf8("btn_getFromList_PNR"));
        btn_getFromList_PNR->setGeometry(QRect(270, 610, 121, 61));
        btn_getFromList_PNR->setFont(font);
        btn_mean_PNR = new QPushButton(centralwidget);
        btn_mean_PNR->setObjectName(QString::fromUtf8("btn_mean_PNR"));
        btn_mean_PNR->setGeometry(QRect(530, 470, 121, 61));
        btn_mean_PNR->setFont(font);
        lbl_value_PNR = new QLabel(centralwidget);
        lbl_value_PNR->setObjectName(QString::fromUtf8("lbl_value_PNR"));
        lbl_value_PNR->setGeometry(QRect(660, 430, 121, 31));
        lbl_value_PNR->setFont(font);
        lineEdit_name_PNR = new QLineEdit(centralwidget);
        lineEdit_name_PNR->setObjectName(QString::fromUtf8("lineEdit_name_PNR"));
        lineEdit_name_PNR->setGeometry(QRect(790, 470, 181, 26));
        lbl_name_PNR = new QLabel(centralwidget);
        lbl_name_PNR->setObjectName(QString::fromUtf8("lbl_name_PNR"));
        lbl_name_PNR->setGeometry(QRect(790, 430, 181, 31));
        lbl_name_PNR->setFont(font);
        spinBox_first_PNR = new QSpinBox(centralwidget);
        spinBox_first_PNR->setObjectName(QString::fromUtf8("spinBox_first_PNR"));
        spinBox_first_PNR->setGeometry(QRect(660, 540, 51, 26));
        spinBox_first_PNR->setMinimum(1);
        spinBox_second_PNR = new QSpinBox(centralwidget);
        spinBox_second_PNR->setObjectName(QString::fromUtf8("spinBox_second_PNR"));
        spinBox_second_PNR->setGeometry(QRect(730, 540, 51, 26));
        spinBox_second_PNR->setMinimum(1);
        lbl_copyAndPaste_PNR = new QLabel(centralwidget);
        lbl_copyAndPaste_PNR->setObjectName(QString::fromUtf8("lbl_copyAndPaste_PNR"));
        lbl_copyAndPaste_PNR->setGeometry(QRect(660, 500, 121, 31));
        lbl_copyAndPaste_PNR->setFont(font);
        lineEdit_value_PNR = new QLineEdit(centralwidget);
        lineEdit_value_PNR->setObjectName(QString::fromUtf8("lineEdit_value_PNR"));
        lineEdit_value_PNR->setGeometry(QRect(660, 470, 121, 26));
        lbl_min_PNR = new QLabel(centralwidget);
        lbl_min_PNR->setObjectName(QString::fromUtf8("lbl_min_PNR"));
        lbl_min_PNR->setGeometry(QRect(790, 500, 41, 31));
        lbl_min_PNR->setFont(font);
        lbl_max_PNR = new QLabel(centralwidget);
        lbl_max_PNR->setObjectName(QString::fromUtf8("lbl_max_PNR"));
        lbl_max_PNR->setGeometry(QRect(790, 530, 41, 31));
        lbl_max_PNR->setFont(font);
        lbl_mean_PNR = new QLabel(centralwidget);
        lbl_mean_PNR->setObjectName(QString::fromUtf8("lbl_mean_PNR"));
        lbl_mean_PNR->setGeometry(QRect(790, 560, 51, 31));
        lbl_mean_PNR->setFont(font);
        lbl_minVal_PNR = new QLabel(centralwidget);
        lbl_minVal_PNR->setObjectName(QString::fromUtf8("lbl_minVal_PNR"));
        lbl_minVal_PNR->setGeometry(QRect(820, 500, 151, 31));
        lbl_minVal_PNR->setFont(font);
        lbl_maxVal_PNR = new QLabel(centralwidget);
        lbl_maxVal_PNR->setObjectName(QString::fromUtf8("lbl_maxVal_PNR"));
        lbl_maxVal_PNR->setGeometry(QRect(820, 530, 151, 31));
        lbl_maxVal_PNR->setFont(font);
        lbl_meanVal_PNR = new QLabel(centralwidget);
        lbl_meanVal_PNR->setObjectName(QString::fromUtf8("lbl_meanVal_PNR"));
        lbl_meanVal_PNR->setGeometry(QRect(840, 560, 131, 31));
        lbl_meanVal_PNR->setFont(font);
        btn_setRowCount_PNR = new QPushButton(centralwidget);
        btn_setRowCount_PNR->setObjectName(QString::fromUtf8("btn_setRowCount_PNR"));
        btn_setRowCount_PNR->setGeometry(QRect(10, 610, 121, 61));
        spinBox_row_PNR = new QSpinBox(centralwidget);
        spinBox_row_PNR->setObjectName(QString::fromUtf8("spinBox_row_PNR"));
        spinBox_row_PNR->setGeometry(QRect(660, 600, 51, 26));
        lbl_rowCount_PNR = new QLabel(centralwidget);
        lbl_rowCount_PNR->setObjectName(QString::fromUtf8("lbl_rowCount_PNR"));
        lbl_rowCount_PNR->setGeometry(QRect(660, 570, 81, 31));
        lbl_rowCount_PNR->setFont(font);
        btn_multByVal_PNR = new QPushButton(centralwidget);
        btn_multByVal_PNR->setObjectName(QString::fromUtf8("btn_multByVal_PNR"));
        btn_multByVal_PNR->setGeometry(QRect(270, 540, 121, 61));
        btn_multByVal_PNR->setFont(font);
        lbl_ammount_PNR = new QLabel(centralwidget);
        lbl_ammount_PNR->setObjectName(QString::fromUtf8("lbl_ammount_PNR"));
        lbl_ammount_PNR->setGeometry(QRect(790, 590, 81, 31));
        lbl_ammount_PNR->setFont(font);
        lbl_ammountVal_PNR = new QLabel(centralwidget);
        lbl_ammountVal_PNR->setObjectName(QString::fromUtf8("lbl_ammountVal_PNR"));
        lbl_ammountVal_PNR->setGeometry(QRect(870, 590, 101, 31));
        lbl_ammountVal_PNR->setFont(font);
        btn_isEmpty_PNR = new QPushButton(centralwidget);
        btn_isEmpty_PNR->setObjectName(QString::fromUtf8("btn_isEmpty_PNR"));
        btn_isEmpty_PNR->setGeometry(QRect(530, 540, 121, 61));
        lbl_isEmpty_PNR = new QLabel(centralwidget);
        lbl_isEmpty_PNR->setObjectName(QString::fromUtf8("lbl_isEmpty_PNR"));
        lbl_isEmpty_PNR->setGeometry(QRect(790, 620, 61, 31));
        lbl_isEmpty_PNR->setFont(font);
        lbl_isEmptyVal_PNR = new QLabel(centralwidget);
        lbl_isEmptyVal_PNR->setObjectName(QString::fromUtf8("lbl_isEmptyVal_PNR"));
        lbl_isEmptyVal_PNR->setGeometry(QRect(860, 620, 111, 31));
        lbl_isEmptyVal_PNR->setFont(font);
        btn_setListItem_PNR = new QPushButton(centralwidget);
        btn_setListItem_PNR->setObjectName(QString::fromUtf8("btn_setListItem_PNR"));
        btn_setListItem_PNR->setGeometry(QRect(400, 610, 121, 61));
        btn_setListItem_PNR->setFont(font);
        btn_setListItem_PNR_2 = new QPushButton(centralwidget);
        btn_setListItem_PNR_2->setObjectName(QString::fromUtf8("btn_setListItem_PNR_2"));
        btn_setListItem_PNR_2->setGeometry(QRect(530, 610, 121, 61));
        btn_setListItem_PNR_2->setFont(font);
        spinBox_rowInList_PNR = new QSpinBox(centralwidget);
        spinBox_rowInList_PNR->setObjectName(QString::fromUtf8("spinBox_rowInList_PNR"));
        spinBox_rowInList_PNR->setGeometry(QRect(660, 660, 51, 26));
        lbl_rowCount_PNR_2 = new QLabel(centralwidget);
        lbl_rowCount_PNR_2->setObjectName(QString::fromUtf8("lbl_rowCount_PNR_2"));
        lbl_rowCount_PNR_2->setGeometry(QRect(660, 630, 81, 31));
        lbl_rowCount_PNR_2->setFont(font);
        Lab07_PNR->setCentralWidget(centralwidget);

        retranslateUi(Lab07_PNR);

        QMetaObject::connectSlotsByName(Lab07_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *Lab07_PNR)
    {
        Lab07_PNR->setWindowTitle(QCoreApplication::translate("Lab07_PNR", "Lab07_PNR", nullptr));
        btn_add_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Add To Tail", nullptr));
        btn_clear_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Clear Queue", nullptr));
        btn_delete_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Delete Head", nullptr));
        btn_ammount_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get Ammount", nullptr));
        btn_max_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get Max Value", nullptr));
        btn_min_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get Min Value", nullptr));
        btn_copyAndPasteElem_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Copy and\n"
"Paste element", nullptr));
        lbl_setFromTable_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Set from Table:", nullptr));
        lbl_setFromList_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Set from List:", nullptr));
        lbl_table_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Table:", nullptr));
        lbl_list_PNR->setText(QCoreApplication::translate("Lab07_PNR", "List:", nullptr));
        lbl_textEdit_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Text Edit:", nullptr));
        btn_getFromTable_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get from Table", nullptr));
        btn_getFromList_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get from List", nullptr));
        btn_mean_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Get Arithmetical  \n"
"Mean", nullptr));
        lbl_value_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Value:", nullptr));
        lbl_name_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Name:", nullptr));
        lbl_copyAndPaste_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Copy and Paste:", nullptr));
        lbl_min_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Min:", nullptr));
        lbl_max_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Max:", nullptr));
        lbl_mean_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Mean:", nullptr));
        lbl_minVal_PNR->setText(QString());
        lbl_maxVal_PNR->setText(QString());
        lbl_meanVal_PNR->setText(QString());
        btn_setRowCount_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Set Row\n"
"Count", nullptr));
        lbl_rowCount_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Row count:", nullptr));
        btn_multByVal_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Multiply by\n"
"Value", nullptr));
        lbl_ammount_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Ammount:", nullptr));
        lbl_ammountVal_PNR->setText(QString());
        btn_isEmpty_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Is Empty?", nullptr));
        lbl_isEmpty_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Is Empty:", nullptr));
        lbl_isEmptyVal_PNR->setText(QString());
        btn_setListItem_PNR->setText(QCoreApplication::translate("Lab07_PNR", "Add to List", nullptr));
        btn_setListItem_PNR_2->setText(QCoreApplication::translate("Lab07_PNR", "Remove from\n"
"List", nullptr));
        lbl_rowCount_PNR_2->setText(QCoreApplication::translate("Lab07_PNR", "Row in List:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab07_PNR: public Ui_Lab07_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB07_PNR_H
