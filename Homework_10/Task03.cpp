#include <iostream>

const int SIZE = 2024;

void concatString(const char str1[], const char str2[], char str3[]);

int main()
{
    char str1[] = "test";
    char str2[] = "asd";
    char str3[SIZE];
    concatString(str1, str2, str3);
}

void concatString(const char str1[], const char str2[], char str3[]) 
{
    while (*str1) {
        *str3 = *str1;
        str1++;
        str3++;
    }

    while (*str2) {
        *str3 = *str2;
        str2++;
        str3++;
    }
}



