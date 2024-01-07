/********************************************************************************
** Form generated from reading UI file 'administration.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATION_H
#define UI_ADMINISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administration
{
public:
    QTabWidget *listProf;
    QWidget *tab;
    QPushButton *btnReset;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *txtRef;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtNom;
    QLabel *label_4;
    QLineEdit *txtPrenom;
    QLabel *label_5;
    QLineEdit *txtCours;
    QPushButton *btnSave;
    QLabel *label;
    QWidget *tab_2;
    QPushButton *btnSave1;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *txtRef1;
    QLabel *label_6;
    QLineEdit *txtPrenom1;
    QLabel *label_7;
    QLineEdit *txtNom1;
    QLabel *label_8;
    QLineEdit *txtSpecialite;
    QPushButton *btnReset1;
    QLabel *label_10;
    QWidget *tab_3;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *txtFind;
    QPushButton *btnFind;
    QTableView *tabfind;
    QWidget *tab_4;
    QLabel *label_13;
    QTableView *listEtu;
    QPushButton *lister;
    QWidget *tab_5;
    QLabel *label_14;
    QTableView *listPro;
    QPushButton *lister1;

    void setupUi(QDialog *Administration)
    {
        if (Administration->objectName().isEmpty())
            Administration->setObjectName("Administration");
        Administration->setWindowModality(Qt::WindowModal);
        Administration->resize(800, 600);
        Administration->setMinimumSize(QSize(800, 600));
        Administration->setMaximumSize(QSize(800, 600));
        listProf = new QTabWidget(Administration);
        listProf->setObjectName("listProf");
        listProf->setGeometry(QRect(10, 30, 761, 521));
        tab = new QWidget();
        tab->setObjectName("tab");
        btnReset = new QPushButton(tab);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(430, 290, 80, 24));
        QFont font;
        font.setPointSize(11);
        btnReset->setFont(font);
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 150, 701, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        txtRef = new QLineEdit(formLayoutWidget);
        txtRef->setObjectName("txtRef");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtRef);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtNom = new QLineEdit(formLayoutWidget);
        txtNom->setObjectName("txtNom");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtNom);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtPrenom = new QLineEdit(formLayoutWidget);
        txtPrenom->setObjectName("txtPrenom");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPrenom);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        txtCours = new QLineEdit(formLayoutWidget);
        txtCours->setObjectName("txtCours");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtCours);

        btnSave = new QPushButton(tab);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(550, 290, 80, 24));
        btnSave->setFont(font);
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 60, 300, 60));
        label->setMinimumSize(QSize(300, 60));
        label->setMaximumSize(QSize(300, 60));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        listProf->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        btnSave1 = new QPushButton(tab_2);
        btnSave1->setObjectName("btnSave1");
        btnSave1->setGeometry(QRect(610, 290, 80, 24));
        btnSave1->setFont(font);
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(30, 150, 711, 141));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        txtRef1 = new QLineEdit(formLayoutWidget_2);
        txtRef1->setObjectName("txtRef1");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtRef1);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        txtPrenom1 = new QLineEdit(formLayoutWidget_2);
        txtPrenom1->setObjectName("txtPrenom1");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtPrenom1);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        txtNom1 = new QLineEdit(formLayoutWidget_2);
        txtNom1->setObjectName("txtNom1");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtNom1);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        txtSpecialite = new QLineEdit(formLayoutWidget_2);
        txtSpecialite->setObjectName("txtSpecialite");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtSpecialite);

        btnReset1 = new QPushButton(tab_2);
        btnReset1->setObjectName("btnReset1");
        btnReset1->setGeometry(QRect(490, 290, 80, 24));
        btnReset1->setFont(font);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(280, 80, 300, 60));
        label_10->setMinimumSize(QSize(300, 60));
        label_10->setMaximumSize(QSize(300, 60));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        label_10->setFont(font2);
        listProf->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_11 = new QLabel(tab_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 90, 171, 20));
        label_11->setMinimumSize(QSize(0, 20));
        label_11->setFont(font);
        label_12 = new QLabel(tab_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(100, 10, 501, 79));
        label_12->setMinimumSize(QSize(400, 70));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_12->setFont(font3);
        txtFind = new QLineEdit(tab_3);
        txtFind->setObjectName("txtFind");
        txtFind->setGeometry(QRect(170, 90, 331, 24));
        btnFind = new QPushButton(tab_3);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(550, 90, 80, 24));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        btnFind->setFont(font4);
        tabfind = new QTableView(tab_3);
        tabfind->setObjectName("tabfind");
        tabfind->setGeometry(QRect(15, 131, 621, 251));
        listProf->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_13 = new QLabel(tab_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(270, 30, 231, 20));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        label_13->setFont(font5);
        listEtu = new QTableView(tab_4);
        listEtu->setObjectName("listEtu");
        listEtu->setGeometry(QRect(5, 71, 741, 411));
        lister = new QPushButton(tab_4);
        lister->setObjectName("lister");
        lister->setGeometry(QRect(640, 40, 80, 24));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        lister->setFont(font6);
        listProf->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        label_14 = new QLabel(tab_5);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(275, 29, 231, 20));
        label_14->setFont(font5);
        listPro = new QTableView(tab_5);
        listPro->setObjectName("listPro");
        listPro->setGeometry(QRect(10, 70, 741, 411));
        lister1 = new QPushButton(tab_5);
        lister1->setObjectName("lister1");
        lister1->setGeometry(QRect(670, 40, 80, 24));
        lister1->setFont(font6);
        listProf->addTab(tab_5, QString());

        retranslateUi(Administration);

        listProf->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Administration);
    } // setupUi

    void retranslateUi(QDialog *Administration)
    {
        Administration->setWindowTitle(QCoreApplication::translate("Administration", "Administration menu", nullptr));
        btnReset->setText(QCoreApplication::translate("Administration", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("Administration", "Prenom     :", nullptr));
        label_3->setText(QCoreApplication::translate("Administration", "Nom          :", nullptr));
        label_4->setText(QCoreApplication::translate("Administration", "Cours        :", nullptr));
        label_5->setText(QCoreApplication::translate("Administration", "Identifiant :", nullptr));
        btnSave->setText(QCoreApplication::translate("Administration", "Enregister", nullptr));
        label->setText(QCoreApplication::translate("Administration", "Enregistrer un Enseignant", nullptr));
        listProf->setTabText(listProf->indexOf(tab), QCoreApplication::translate("Administration", "Ajouter Prof", nullptr));
        btnSave1->setText(QCoreApplication::translate("Administration", "Enregister", nullptr));
        label_9->setText(QCoreApplication::translate("Administration", "Identifiant :", nullptr));
        label_6->setText(QCoreApplication::translate("Administration", "Prenom     :", nullptr));
        label_7->setText(QCoreApplication::translate("Administration", "Nom          :", nullptr));
        label_8->setText(QCoreApplication::translate("Administration", "Specialite   :", nullptr));
        btnReset1->setText(QCoreApplication::translate("Administration", "Reset", nullptr));
        label_10->setText(QCoreApplication::translate("Administration", "Enregistrer un Etudiant", nullptr));
        listProf->setTabText(listProf->indexOf(tab_2), QCoreApplication::translate("Administration", "Ajouter Etudiant", nullptr));
        label_11->setText(QCoreApplication::translate("Administration", "Entrer identifiant ", nullptr));
        label_12->setText(QCoreApplication::translate("Administration", "                   Chercher utilisateur par identifiant", nullptr));
        btnFind->setText(QCoreApplication::translate("Administration", "Chercher", nullptr));
        listProf->setTabText(listProf->indexOf(tab_3), QCoreApplication::translate("Administration", "Recherche", nullptr));
        label_13->setText(QCoreApplication::translate("Administration", "        List des Etudiant", nullptr));
        lister->setText(QCoreApplication::translate("Administration", "lister", nullptr));
        listProf->setTabText(listProf->indexOf(tab_4), QCoreApplication::translate("Administration", "List Etudiant", nullptr));
        label_14->setText(QCoreApplication::translate("Administration", "        List des Professeurs", nullptr));
        lister1->setText(QCoreApplication::translate("Administration", "lister", nullptr));
        listProf->setTabText(listProf->indexOf(tab_5), QCoreApplication::translate("Administration", "List Professeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administration: public Ui_Administration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATION_H
