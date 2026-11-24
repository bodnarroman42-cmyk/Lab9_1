// Lab_9_1.cpp
// Головний файл проєкту з функцією main() для Варіанту 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include "var.h"
#include "dod.h"
#include "sum.h"
#include "clocale"
using namespace std;
using namespace nsVar;
using namespace nsDod;
using namespace nsSum;

int main()
{
    setlocale(LC_ALL, "Ukrainian"); // встановлення української локалі для коректного відображення кирилиці
    // Оголошення локальних змінних на початку функції
    double exact_val = 0.0;              // точне значення функції exp(-x)

    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx  = "; cin >> dx;
    cout << "e   = "; cin >> e;
    cout << endl;

    // Заголовок та шапка таблиці згідно з умовою завдання
    cout << "Таблиця значень функцiї exp(-x) (ряд Тейлора, варiант 2)" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << left
        << setw(12) << "x"
        << setw(18) << "exp(-x)"
        << setw(18) << "Sum"
        << setw(12) << "n" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k)
    {
        sum();                           // обчислення суми ряду та кількості доданків n
        exact_val = exp(-x);             // точне значення функції exp(-x)

        cout << left
            << setw(12) << fixed << setprecision(4) << x
            << setw(18) << fixed << setprecision(8) << exact_val
            << setw(18) << fixed << setprecision(8) << s
            << setw(12) << n << endl;

        x += dx;                         // перехід до наступного значення аргументу
    }

    cout << "-----------------------------------------------------------------" << endl;

    cin.get();
    return 0;
}