// var.h
// Заголовний файл оголошення глобальних змінних у просторі імен nsVar

#pragma once

namespace nsVar
{
    extern int n;                        // кількість просумованих доданків
    extern double x, x_p, x_k, dx, e;    // аргумент, межі інтервалу, крок, точність
    extern double a, s;                  // поточний доданок та сума ряду
}