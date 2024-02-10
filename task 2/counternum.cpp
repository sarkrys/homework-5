#include "countnum.h"
#include <iostream>

void Counter::setNum(int value) {
    num = value;
}

void Counter::increment() {
    num++;
}

void Counter::decrement() {
    num--;
}

void Counter::printValue() {
    std::cout << "Текущее значение: " << num << std::endl;
}