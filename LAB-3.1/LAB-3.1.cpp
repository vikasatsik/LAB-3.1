// LAB-3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_03_1.cpp
// Сацик Вікторія
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 17

#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;

    cout << "x = "; cin >> x;
    A = pow(x, 2.0) + 1;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 4)
        B = pow(4 * x, 7.0) - pow(x, 5.0) + pow(x, 3.0) - 2;
    if (4 <= x && x < 7)
        B = atan((abs(x) + 1) / 2.0) + 8.3 * x;
    if (x >= 7)
        B = log10(abs(2 * x + exp(4 * x + 1)));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 4)
        B = pow(4 * x, 7.0) - pow(x, 5.0) + pow(x, 3.0) - 2;
    else
        if (x >= 7)
            B = log10(abs(2 * x + exp(4 * x + 1)));
        else
            B = atan((abs(x) + 1) / 2.0) + 8.3 * x;

    y = A + B;

    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}