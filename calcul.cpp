#include "calcul.h"

Calcul::Calcul()
{
    a = 0;
    b = 0;
    z = '+';
    f = true;
}

long long Calcul::StrToInt(QString str)
{
    long long  x, y, zn;
    int i = 0;
    zn = 1;
    x = str.length();
    if (str[0] == '-')
    {
        zn = -1;
        i++;
    }
    x = 0;
    while ((str[i] >= '0') and (str[i] <= '9'))
    {
        if (str[i] == '0')
            x = x * 10;
        if (str[i] == '1')
            x = x * 10 + 1;
        if (str[i] == '2')
            x = x * 10 + 2;
        if (str[i] == '3')
            x = x * 10 + 3;
        if (str[i] == '4')
            x = x * 10 + 4;
        if (str[i] == '5')
            x = x * 10 + 5;
        if (str[i] == '6')
            x = x * 10 + 6;
        if (str[i] == '7')
            x = x * 10 + 7;
        if (str[i] == '8')
            x = x * 10 + 8;
        if (str[i] == '9')
            x = x * 10 + 9;
        i++;
    }
    return x;
}

QString Calcul::IntToStr(long long x)
{
    QString str = "";
    if (x < 0)
    {
        str += '-';
        x = -x;
    }
    long long k, y = 0;
    k = x;
    while (x > 0)
    {
        y = y * 10 + x % 10;
        x = x / 10;
    }
    while (k  > 0)
    {
        if (y % 10 == 0)
            str += '0';
        if (y % 10 == 1)
            str += '1';
        if (y % 10 == 2)
            str += '2';
        if (y % 10 == 3)
            str += '3';
        if (y % 10 == 4)
            str += '4';
        if (y % 10 == 5)
            str += '5';
        if (y % 10 == 6)
            str += '6';
        if (y % 10 == 7)
            str += '7';
        if (y % 10 == 8)
            str += '8';
        if (y % 10 == 9)
            str += '9';
        y = y / 10;
        k = k / 10;
    }
    return str;
}

void Calcul::PutText(QString str)
{
    st = str;
}

void Calcul::PushInt(char x)
{
    GetText();
    if (f)
    {
        st = x;
        f = false;
    }
    else
        st += x;
    SetText(st);
}
void Calcul::PushDoing(char x)
{
    f = true;
    GetText();
    a = StrToInt(st);
    z = x;
}
void Calcul::PushEnt()
{
    f = true;
    GetText();
    b = StrToInt(st);
    if (z == '+')
        b = a + b;
    if (z == '-')
        b = a - b;
    if (z == '*')
        b = a * b;
    if (z == '/')
        b = a / b;
    if (z == '^')
    {
        int p = 1;
        for (int i = 0; i < b; i++)
            p = p * a;
        b = p;
    }
    SetText(IntToStr(b));
}
void Calcul::PushC()
{
    a = 0;
    b = 0;
    z = '+';
    f = true;
    SetText("0");
}
