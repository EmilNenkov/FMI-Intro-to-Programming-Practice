#include <iostream>

int sum_divisors(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        num % i == 0 ? sum += i : num;
    }
    return sum;
}

bool is_perfect(int num) {
    return sum_divisors(num) == num;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << std::boolalpha << is_perfect(num);
}
