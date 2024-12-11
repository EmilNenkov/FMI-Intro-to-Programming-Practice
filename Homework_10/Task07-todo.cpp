#include <iostream>

void printStr(const char str[]);
void toUpper(char str[]);
void toLower(char str[]);

int main()
{
    char str[] = "CPPExample";
    toUpper(str);
    printStr(str);
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
        str++;
    }
}
