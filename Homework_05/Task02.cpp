#include <iostream>

bool check_sum(int num) {
    return (num % 10 + (num / 10) % 10 + (num / 100) % 10) < 10;
}

bool check_prime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void get_result(int num) {
    for (int i = 101; i <= num; i++) {
        if (check_sum(i) && check_prime(i)) {
                std::cout << i << ' ';
        }
    }
}

int main() {
    int num;
    std::cin >> num;
    get_result(num);
}
