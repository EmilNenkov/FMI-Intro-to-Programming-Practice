#include <iostream>

int countWords(const char str[]) {
    unsigned int counter = 0;
    bool word_found = false;

    while (*str) {
        if (('A' <= *str && *str <= 'Z' || 'a' <= *str && *str <= 'z') && !word_found) {
            counter++;
            word_found = true;
        }
        else if (' ' <= *str && *str <= '@' && word_found) {
            word_found = false;
        }
        str++;
    }
    return counter;
}

int main()
{
    char str[] = "Good  morning,     Vietnam!";
    std::cout << countWords(str);
}


