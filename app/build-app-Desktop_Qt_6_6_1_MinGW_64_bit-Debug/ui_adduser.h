/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_AddUSER
{
public:

    void setupUi(QDialog *AddUSER)
    {
        if (AddUSER->objectName().isEmpty())
            AddUSER->setObjectName("AddUSER");
        AddUSER->resize(800, 600);
        AddUSER->setMinimumSize(QSize(800, 600));
        AddUSER->setMaximumSize(QSize(800, 600));

        retranslateUi(AddUSER);

        QMetaObject::connectSlotsByName(AddUSER);
    } // setupUi

    void retranslateUi(QDialog *AddUSER)
    {
        AddUSER->setWindowTitle(QCoreApplication::translate("AddUSER", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUSER: public Ui_AddUSER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
