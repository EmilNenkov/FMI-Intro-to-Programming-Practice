#include <iostream>

int findLowestCommonDenominator(int num1, int num2, int num3, int num4);

int main()
{
    int num1, num2, num3, num4;
    std::cin >> num1 >> num2 >> num3 >> num4;
    
    std::cout << findLowestCommonDenominator(num1, num2, num3, num4);
}

int findLowestCommonDenominator(int num1, int num2, int num3, int num4) {
    for (int i = 1 ;; i++) {
        if (i % num1 == 0 && i % num2 == 0 && i % num3 == 0 && i % num4 == 0) {
            return i;
        }
    }
}
