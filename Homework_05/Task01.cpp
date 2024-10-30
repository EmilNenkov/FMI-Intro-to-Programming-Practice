#include <iostream>

bool isDigit(char num) {
    return '0' <= num && num <= '9';
}

bool isUpper(char symbol) {
    return 'A' <= symbol && symbol <= 'Z';
}

bool isLower(char symbol) {
    return 'a' <= symbol && symbol <= 'z';
}

bool isAlpha(char symbol) {
    return isUpper(symbol) || isLower(symbol);
}

bool isAlnum(char symbol) {
    return isAlpha(symbol) || isDigit(symbol);
}

char capitalize(char symbol) {
    return isLower(symbol) ? symbol - 'a' - 'A' : symbol;
}

char makeLower(char symbol) {
    return isUpper(symbol) ? symbol + 'a' - 'A' : symbol;
}

int parseInt(char symbol) {
    return isDigit(symbol) ? symbol : -1;
}

char toChar(int symbol) {
    return 0 <= symbol && symbol <= 9 ? symbol : '\0';
}

int myLog(int symbol) {

}

int myPow(int symbol) {

}

int myCeil(double symbol) {
    return symbol + 1;
}

int myFloor(double symbol) {
    return symbol;
}

int myAbs(double symbol) {
    return std::fabs(symbol);
}

int main()
{
    std::cout << makeLower('H');
}


