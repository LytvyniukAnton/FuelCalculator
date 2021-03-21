#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonCalc_clicked();

    void on_lineEditNumberOfLiters_cursorPositionChanged(int arg1, int arg2);

    void on_doubleSpinBoxSpend_editingFinished();

    void on_pushButtonCalc_2_clicked();

    void on_actionExit_3_triggered();

    void on_pushButton_clicked();

    void on_doubleSpinBoxDistance_2_editingFinished();

    void on_lineEditNumberOfLiters_3_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditNumberOfLiters_4_cursorPositionChanged(int arg1, int arg2);

    void on_doubleSpinBoxSpend_2_editingFinished();

    void on_lineEditNumberOfLiters_5_cursorPositionChanged(int arg1, int arg2);

    void on_pushButtonCalc_3_clicked();

    void on_doubleSpinBoxPrice_2_editingFinished();

    void on_doubleSpinBoxPrice_3_editingFinished();

    void on_lineEditNumberOfLiters_2_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
