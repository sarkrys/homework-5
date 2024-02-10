#include "upp.h"
#include <iostream>
#include <cmath>
#include <string>
func::func() {
    std::cout << "Введите первое число: ";
    std::cin >> fnum;
    std::cout << "\nВведите второе число: ";
    std::cin >> snum;
    std::cout << "\nВыберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> counoper;
}

void func::fifunc() {
    if (counoper == 1) {
        plus();
    }
    else if (counoper == 2) {
        minus();
    }
    else if (counoper == 3) {
        umnog();
    }
    else if (counoper == 4) {
        delen();
    }
    else if (counoper == 5) {
        stepen();
    }
}

void func::plus() {
    result = fnum + snum;
    counoper = 1;
}

void func::minus() {
    result = fnum - snum;
    counoper = 2;
}

void func::umnog() {
    result = fnum * snum;
    counoper = 3;
}

void func::delen() {
    result = fnum / snum;
    counoper = 4;
}

void func::stepen() {
    result = pow(fnum, snum);
    counoper = 5;
}

void func::printres() {
    if (counoper == 1) {
        std::cout << fnum << " + " << snum << " = " << result << std::endl;
    }
    else if (counoper == 2) {
        std::cout << fnum << " - " << snum << " = " << result << std::endl;
    }
    else if (counoper == 3) {
        std::cout << fnum << " * " << snum << " = " << result << std::endl;
    }
    else if (counoper == 4) {
        std::cout << fnum << " / " << snum << " = " << result << std::endl;
    }
    else if (counoper == 5) {
        std::cout << fnum << " в степени " << snum << " = " << result << std::endl;
    }
}