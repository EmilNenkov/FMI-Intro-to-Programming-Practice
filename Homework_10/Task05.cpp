#include <iostream>

long long parseInt(const char str[]);

int main()
{
    char str[] = "-123";
    std::cout << parseInt(str);
}

long long parseInt(const char str[])
{
    bool is_negative = false;

    if (*str == '-') {
        is_negative = true;
        str++;
    }

    long long result_int = *str - 48;
    str++;

    while (*str) {
        result_int *= 10;
        result_int += *str - 48;
        str++;
    }

    return is_negative ? -result_int : result_int;
}



