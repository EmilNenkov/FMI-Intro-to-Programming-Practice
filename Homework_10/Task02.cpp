#include <iostream>

const int SIZE = 2024;

void copyString(const char str1[], char str2[]);

int main()
{
    char str1[] = "test";
    char str2[SIZE];
    copyString(str1, str2);
}

void copyString(const char str1[], char str2[]) {
    while (*str1) {
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

