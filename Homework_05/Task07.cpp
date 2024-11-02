#include <iostream>

bool desc_ord(int num) {
    int curr = num % 10;
    while (num / 10) {
        num /= 10;
        if (!(num % 10 >= curr)) {
            return false;
        }
        curr = num % 10;
    }
    return true;
}

bool asc_ord(int num) {
    int curr = num % 10;
    while (num) {
        num /= 10;
        if (!(num % 10 <= curr)) {
            return false;
        }
        curr = num % 10;
    } 
    return true;
}

bool get_res(int num) {
    return asc_ord(num) || desc_ord(num);
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << get_res(num);
}
