#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_buttonBox_clicked(QAbstractButton *button)
{
    password = ui->lineEdit->text();
}

void Dialog::setMessege(QString msg){
    ui->lineEdit->setText(msg);
}
