#include <iostream>

int compareLexicographicValues(const char str1[], const char str2[]);

int main()
{
    char str1[] = "abcd";
    char str2[] = "abc";
    std::cout << compareLexicographicValues(str1, str2);
}

int compareLexicographicValues(const char str1[], const char str2[])
{
    while (*str1 || *str2) {
        if (*str1 > *str2) {
            return 1;
        }
        else if (*str1 < *str2) {
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}



