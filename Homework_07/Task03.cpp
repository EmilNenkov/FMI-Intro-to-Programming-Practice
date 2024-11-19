#include <iostream>

void printSimplifiedDivision(int numerator, int denominator);

int main()
{
    int numerator, denominator;
    std::cin >> numerator >> denominator;
    printSimplifiedDivision(numerator, denominator);
}

void printSimplifiedDivision(int numerator, int denominator) {
    int lower_num = numerator;
    denominator < numerator ? lower_num = denominator : lower_num;
    
    for (int i = 2; i <= lower_num; i++) {
        if (i > lower_num) {
            break;
        }
        else if (numerator % i == 0 && denominator % i == 0) {
            numerator /= i;
            denominator /= i;
        }
    }
    std::cout << numerator << '/' << denominator;
}
