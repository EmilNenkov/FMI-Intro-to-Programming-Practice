#include <iostream>

int main()
{
    char str[] = "CPPExample";
}

void printStr(const char str[]) {
    while (*str) {
        std::cout << *str;
        str++;
    }
}

void toUpper(char str[]) {
    int counter = 0;
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str += 'A' - 'a';
        }
        str++;
    }
}

void toLower(char str[]) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 'a' - 'A';
        }
        std::cout << *str;
        str++;
    }
}
