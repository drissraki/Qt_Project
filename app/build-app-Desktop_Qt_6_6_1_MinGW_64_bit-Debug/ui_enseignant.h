/********************************************************************************
** Form generated from reading UI file 'enseignant.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENSEIGNANT_H
#define UI_ENSEIGNANT_H

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

class Ui_Enseignant
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *refEtud;
    QLabel *label_4;
    QLineEdit *noteEtud;
    QLabel *label_5;
    QLineEdit *crsEtud;
    QLabel *label_2;
    QPushButton *AjouterNote;
    QWidget *tab_2;
    QLabel *label_6;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *ChercherCours;
    QPushButton *cnotes;
    QTableView *notes;
    QWidget *tab_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_10;
    QLineEdit *chercherRef;
    QPushButton *chercherE;
    QLabel *label_7;
    QTableView *note;
    QLabel *label;

    void setupUi(QDialog *Enseignant)
    {
        if (Enseignant->objectName().isEmpty())
            Enseignant->setObjectName("Enseignant");
        Enseignant->setWindowModality(Qt::WindowModal);
        Enseignant->resize(800, 526);
        Enseignant->setMaximumSize(QSize(800, 600));
        tabWidget = new QTabWidget(Enseignant);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 70, 771, 441));
        tab = new QWidget();
        tab->setObjectName("tab");
        formLayoutWidget = new QWidget(tab);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(9, 49, 741, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        refEtud = new QLineEdit(formLayoutWidget);
        refEtud->setObjectName("refEtud");

        formLayout->setWidget(0, QFormLayout::FieldRole, refEtud);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        noteEtud = new QLineEdit(formLayoutWidget);
        noteEtud->setObjectName("noteEtud");

        formLayout->setWidget(1, QFormLayout::FieldRole, noteEtud);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        crsEtud = new QLineEdit(formLayoutWidget);
        crsEtud->setObjectName("crsEtud");

        formLayout->setWidget(2, QFormLayout::FieldRole, crsEtud);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 261, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_2->setFont(font);
        AjouterNote = new QPushButton(tab);
        AjouterNote->setObjectName("AjouterNote");
        AjouterNote->setGeometry(QRect(630, 140, 80, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(11, 1, 261, 41));
        label_6->setFont(font);
        formLayoutWidget_2 = new QWidget(tab_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(10, 50, 741, 81));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        ChercherCours = new QLineEdit(formLayoutWidget_2);
        ChercherCours->setObjectName("ChercherCours");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ChercherCours);

        cnotes = new QPushButton(formLayoutWidget_2);
        cnotes->setObjectName("cnotes");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cnotes);

        notes = new QTableView(tab_2);
        notes->setObjectName("notes");
        notes->setGeometry(QRect(15, 141, 741, 201));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        formLayoutWidget_3 = new QWidget(tab_3);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(9, 59, 741, 81));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(formLayoutWidget_3);
        label_10->setObjectName("label_10");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_10);

        chercherRef = new QLineEdit(formLayoutWidget_3);
        chercherRef->setObjectName("chercherRef");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, chercherRef);

        chercherE = new QPushButton(formLayoutWidget_3);
        chercherE->setObjectName("chercherE");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, chercherE);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 261, 41));
        label_7->setFont(font);
        note = new QTableView(tab_3);
        note->setObjectName("note");
        note->setGeometry(QRect(10, 150, 741, 201));
        tabWidget->addTab(tab_3, QString());
        label = new QLabel(Enseignant);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 30, 171, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        retranslateUi(Enseignant);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Enseignant);
    } // setupUi

    void retranslateUi(QDialog *Enseignant)
    {
        Enseignant->setWindowTitle(QCoreApplication::translate("Enseignant", "enseignant menu", nullptr));
        label_3->setText(QCoreApplication::translate("Enseignant", "reference etudiant :", nullptr));
        label_4->setText(QCoreApplication::translate("Enseignant", "Note Etudiant :", nullptr));
        label_5->setText(QCoreApplication::translate("Enseignant", "Cours", nullptr));
        label_2->setText(QCoreApplication::translate("Enseignant", "Ajouter une note", nullptr));
        AjouterNote->setText(QCoreApplication::translate("Enseignant", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Enseignant", "Ajouter note", nullptr));
        label_6->setText(QCoreApplication::translate("Enseignant", "Consulter  note", nullptr));
        label_9->setText(QCoreApplication::translate("Enseignant", "Cours", nullptr));
        cnotes->setText(QCoreApplication::translate("Enseignant", "chercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Enseignant", "Consulter note", nullptr));
        label_10->setText(QCoreApplication::translate("Enseignant", "Ref_etudiant", nullptr));
        chercherE->setText(QCoreApplication::translate("Enseignant", "chercher", nullptr));
        label_7->setText(QCoreApplication::translate("Enseignant", "Consulter  note", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Enseignant", "chercher un etudiant", nullptr));
        label->setText(QCoreApplication::translate("Enseignant", "    Professeur menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enseignant: public Ui_Enseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSEIGNANT_H
