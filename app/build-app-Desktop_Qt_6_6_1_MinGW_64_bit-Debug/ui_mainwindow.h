/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *I_Enseignant;
    QPushButton *I_Etudiant;
    QPushButton *I_Administration;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 700);
        MainWindow->setMinimumSize(QSize(900, 700));
        MainWindow->setMaximumSize(QSize(900, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        I_Enseignant = new QPushButton(centralwidget);
        I_Enseignant->setObjectName("I_Enseignant");
        I_Enseignant->setGeometry(QRect(370, 310, 100, 75));
        I_Enseignant->setMinimumSize(QSize(100, 75));
        I_Enseignant->setMaximumSize(QSize(100, 75));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        I_Enseignant->setFont(font);
        I_Etudiant = new QPushButton(centralwidget);
        I_Etudiant->setObjectName("I_Etudiant");
        I_Etudiant->setGeometry(QRect(660, 310, 100, 75));
        I_Etudiant->setMinimumSize(QSize(100, 75));
        I_Etudiant->setMaximumSize(QSize(100, 75));
        I_Etudiant->setFont(font);
        I_Administration = new QPushButton(centralwidget);
        I_Administration->setObjectName("I_Administration");
        I_Administration->setGeometry(QRect(100, 310, 100, 75));
        I_Administration->setMinimumSize(QSize(100, 75));
        I_Administration->setMaximumSize(QSize(100, 75));
        I_Administration->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-12, -15, 900, 700));
        label->setMinimumSize(QSize(900, 700));
        label->setMaximumSize(QSize(900, 700));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Pictures/dark.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 421, 101));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../../../Pictures/xxx.png")));
        label_2->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        I_Enseignant->raise();
        I_Etudiant->raise();
        I_Administration->raise();
        label_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Gestion notes", nullptr));
        I_Enseignant->setText(QCoreApplication::translate("MainWindow", "Prof", nullptr));
        I_Etudiant->setText(QCoreApplication::translate("MainWindow", "Etudiant", nullptr));
        I_Administration->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
