#include <iostream>

bool is_palindrome(int num) {
    int counter, divisor1, divisor2;
    counter = divisor1 = divisor2 = 1;
    int temp = num / 10;
    
    while (temp) {
        counter++;
        divisor2 *= 10;
        temp /= 10;
    }
    
    counter /= 2;
    
    for (int i = 0; i < counter; i++) {
        if ((num / divisor1) % 10 != (num / divisor2) % 10) {
            return false;
        }
        divisor1 *= 10;
        divisor2 /= 10;
    }
    return true;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << is_palindrome(num);
}
