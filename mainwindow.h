#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <cmath>
#include <algorithm>
#include <QLineEdit>
#include <QString>
#include <sstream>
#include <QChar>

class MyWindow : public QDialog
{
    Q_OBJECT

public:
    MyWindow(QWidget *parent = 0);
private:
    QPushButton *ph_1, *ph_2, *ph_3, *ph_4, *ph_5, *ph_6, *ph_7, *ph_8, *ph_9, *ph_0;
    QPushButton *ph_plus, *ph_minus, *ph_div, *ph_mn, *ph_pow, *ph_clean, *ph_ent;
    QLineEdit *lbl;
private slots:
    void Push1();
    void Push2();
    void Push3();
    void Push4();
    void Push5();
    void Push6();
    void Push7();
    void Push8();
    void Push9();
    void Push0();
    void PushPlus();
    void PushMinus();
    void PushDiv();
    void PushMn();
    void PushPow();
    void PushClean();
    void PushEnter();
signals:
    void PushInt(char a);
    void PushEnt();
    void PushDoing(char c);
    void PushC();
    void PutText(QString str);
public slots:
    void SetText(QString str)
    {
        lbl->setText(str);
    }
    void GetText()
    {
        PutText(lbl->text());
    }
};

#endif // MAINWINDOW_H
