#include "adduser.h"
#include "ui_adduser.h"

AddUSER::AddUSER(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddUSER)
{
    ui->setupUi(this);
}

AddUSER::~AddUSER()
{
    delete ui;
}
