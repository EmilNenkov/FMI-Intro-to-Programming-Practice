#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int lowest_num = -2147483648;
    int highest_num = lowest_num;
    int second_highest_num = lowest_num;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        
        if (num > highest_num) {
            second_highest_num = highest_num;
            highest_num = num;
        }
        
        else if (num > second_highest_num && num != highest_num) {
            second_highest_num = num;
        }
    }
    
    second_highest_num == lowest_num ? second_highest_num = highest_num : second_highest_num;
    
    std::cout << highest_num << ' ' << second_highest_num;
}
