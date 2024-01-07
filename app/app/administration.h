#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <QDialog>
#include "dbHeader.h"


namespace Ui {
class Administration;
}

class Administration : public QDialog
{
    Q_OBJECT

public:
    explicit Administration(QWidget *parent = nullptr);
    ~Administration();

private slots:
    void on_AjouterUtilisateur_clicked();

    void on_btnSave_clicked();

    void on_btnSave1_clicked();

    void on_btnFind_clicked();


    void on_lister_clicked();

    void on_lister1_clicked();

private:
    Ui::Administration *ui;
     QSqlQueryModel *model;
};

#endif // ADMINISTRATION_H
