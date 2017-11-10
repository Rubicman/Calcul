#ifndef CALCUL_H
#define CALCUL_H

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

class Calcul : public QObject
{
    Q_OBJECT

private:
    long long a, b;
    char z;
    bool f, fe;
    QString st;
public:
    Calcul();
signals:
    void SetText(QString str);
    void GetText();
private:
    long long StrToInt(QString str);
    QString IntToStr(long long x);
public slots:
    void PutText(QString str);
    void PushInt(char x);
    void PushDoing(char x);
    void PushEnt();
    void PushC();
};

#endif // CALCUL_H
