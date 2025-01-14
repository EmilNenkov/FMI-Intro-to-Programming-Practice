#include <iostream>

void removeNonDigirs(char str[]) {
    char *val = str;
    while (*str) {
        if (*str <= '9' && *str >= '0') {
            *val = *str;
            val++;
        }
        str++;
    }
    *val = '\0';
}

int main()
{
    char str[64] = ")Lso!c6d%9ucpB*CED5su2DH%&7t4)*";
    removeNonDigirs(str);
    std::cout << str;
}



