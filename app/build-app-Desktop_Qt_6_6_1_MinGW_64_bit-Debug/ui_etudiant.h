/********************************************************************************
** Form generated from reading UI file 'etudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETUDIANT_H
#define UI_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_etudiant
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *Enote;
    QPushButton *Echercher;
    QTableView *Eliste;

    void setupUi(QDialog *etudiant)
    {
        if (etudiant->objectName().isEmpty())
            etudiant->setObjectName("etudiant");
        etudiant->setWindowModality(Qt::WindowModal);
        etudiant->resize(800, 600);
        etudiant->setMinimumSize(QSize(800, 600));
        etudiant->setMaximumSize(QSize(800, 600));
        label = new QLabel(etudiant);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 60, 191, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        gridLayoutWidget = new QWidget(etudiant);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(19, 140, 751, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        Enote = new QLineEdit(gridLayoutWidget);
        Enote->setObjectName("Enote");

        gridLayout->addWidget(Enote, 0, 1, 1, 1);

        Echercher = new QPushButton(gridLayoutWidget);
        Echercher->setObjectName("Echercher");

        gridLayout->addWidget(Echercher, 0, 2, 1, 1);

        Eliste = new QTableView(etudiant);
        Eliste->setObjectName("Eliste");
        Eliste->setGeometry(QRect(15, 241, 761, 261));

        retranslateUi(etudiant);

        QMetaObject::connectSlotsByName(etudiant);
    } // setupUi

    void retranslateUi(QDialog *etudiant)
    {
        etudiant->setWindowTitle(QCoreApplication::translate("etudiant", "Etudiant menu", nullptr));
        label->setText(QCoreApplication::translate("etudiant", "    Etudiant menu", nullptr));
        label_2->setText(QCoreApplication::translate("etudiant", "Entrer votre identifiant : ", nullptr));
        Echercher->setText(QCoreApplication::translate("etudiant", "chercher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class etudiant: public Ui_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETUDIANT_H
