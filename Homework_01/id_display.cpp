#include <iostream>

int main()
{
    char id[11];
    std::cin >> id;

    std::cout << "*******";

    for (int i = 7; i < 10; i++) {
        std::cout << id[i];
    }
}