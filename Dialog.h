#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    QString getPassword(){
        return password;
    }


    ~Dialog();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Dialog *ui;
    QString password;
public:
    void setMessege(QString msg);

};

#endif // DIALOG_H
