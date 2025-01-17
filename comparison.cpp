﻿// comparison.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Одна из основных операций с числами – их сравнение. 
// Мы подозреваем, что вы в совершенстве владеете этой операцией и можете сравнивать любые числа, в том числе и целые. 
// В данной задаче необходимо сравнить два целых числа.

//Входные данные
//В двух строчках входного файла INPUT.TXT записаны числа A и B, не превосходящие по абсолютной величине 2×109.

//Выходные данные
//Запишите в выходной файл OUTPUT.TXT один символ "<", если A < B, ">", если A > B и "=", если A = B.

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    if (a < pow(2, 109) and b < pow(2, 109))
    {
        if (a < b) cout << "a < b" << endl;

        else if (a > b) cout << "a > b" << endl;

        else if (a == b) cout << "a = b" << endl;
    }

    else cout << "A и B, превосходят по абсолютной величине 2×109 " << endl;

    return 0;
}


