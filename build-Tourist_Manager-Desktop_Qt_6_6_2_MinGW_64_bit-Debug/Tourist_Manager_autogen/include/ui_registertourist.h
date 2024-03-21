/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtName;
    QLabel *label_2;
    QLineEdit *txtPassport;
    QLabel *label_3;
    QLineEdit *txtContact;
    QLabel *label_4;
    QLineEdit *txtAddress;
    QLabel *label_5;
    QComboBox *cmbChoosePackage;
    QTextEdit *txtPackageDescription;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(400, 300);
        RegisterTourist->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 241));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtName = new QLineEdit(formLayoutWidget);
        txtName->setObjectName("txtName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtPassport = new QLineEdit(formLayoutWidget);
        txtPassport->setObjectName("txtPassport");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassport);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtContact = new QLineEdit(formLayoutWidget);
        txtContact->setObjectName("txtContact");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtContact);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtAddress = new QLineEdit(formLayoutWidget);
        txtAddress->setObjectName("txtAddress");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtAddress);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(4, QFormLayout::FieldRole, cmbChoosePackage);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPackageDescription);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(290, 260, 71, 21));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(190, 260, 71, 21));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Register Tourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "Full Name", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Passport NO", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Contact NO", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Address", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Choose Package", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H
