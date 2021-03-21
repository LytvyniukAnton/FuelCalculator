#include "mainwindow.h" 
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog d;
    d.setModal(true);

    int cnt=0;
    int cnt1=3;
    while(true){
        int result = d.exec();
        if (result != 1) return 0;

        QString pswd = d.getPassword();
        if (pswd == "12345"){
            break;
        }else{
            cnt++;
            cnt1--;
            d.setMessege("Wrong password. Залишилося спроб: "
                         +QString::number(cnt1)+" (Всього 3) ");

        }
        if(cnt==3) return 0;
    }

    MainWindow w;
    w.show();

    return a.exec();
}
