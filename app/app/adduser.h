#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>

namespace Ui {
class AddUSER;
}

class AddUSER : public QDialog
{
    Q_OBJECT

public:
    explicit AddUSER(QWidget *parent = nullptr);
    ~AddUSER();

private:
    Ui::AddUSER *ui;
};

#endif // ADDUSER_H
