#include <iostream>

int num_conc(int num1, int num2) {
    int temp = num2;
    do {
        num1 *= 10;
        temp /= 10;
    }
    while (temp);
    return num1 + num2;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << num_conc(num1, num2);
}
