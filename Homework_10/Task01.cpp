#include <iostream>

int getStringLength(const char str[]);

int main()
{  
    char str[] = "test";
    std::cout << getStringLength(str);
}

int getStringLength(const char str[]) {
    int counter = 0;

    while (*str) {
        counter++;
        str++;
    }

    return counter;
}

