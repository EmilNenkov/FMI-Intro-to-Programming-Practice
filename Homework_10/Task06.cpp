#include <iostream>

bool returnIfSubstring(const char str[], const char sub_str[]);

int main()
{
    char str[] = "cppprogramming";
    char sub_str[] = "gram";
    std::cout << std::boolalpha << returnIfSubstring(str, sub_str);
}

int getStringDigitsCount(const char str[]) {
    int counter = 0;
    while (*str) {
        counter++;
        str++;
    }

    return counter;
}

bool returnIfSubstring(const char str[], const char sub_str[]) {
    int sub_str_digits_count = getStringDigitsCount(sub_str);
    int counter = 0;

    while (*str) {
        if (*str == *sub_str) {
            counter++;
            sub_str++;
            if (counter == sub_str_digits_count) {
                return true;
            }
        }
        else {
            sub_str -= counter;
            counter = 0;
        }
        str++;
    }
    return false;
}



