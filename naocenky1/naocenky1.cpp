#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int a = 4;
    int b = 12;

    int* yk1 = &a;
    int* yk2 = &b;

    *yk1 *= 3;
    *yk2 /= 3;

    std::cout << "Новое значение a: " << a << std::endl;
    std::cout << "Новое значение b: " << b << std::endl;

    return 0;
}


