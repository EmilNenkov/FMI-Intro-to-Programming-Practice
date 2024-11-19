#include <iostream>

int biggestDivisor(int num1, int num2, int num3, int num4);

int main()
{
    int num1, num2, num3, num4;
    std::cin >> num1 >> num2 >> num3 >> num4;
    
    std::cout << biggestDivisor(num1, num2, num3, num4);
}

int biggestDivisor(int num1, int num2, int num3, int num4) {
    int biggest_divisor = 1;
    int biggest_num = num1;
    
    num2 > biggest_num ? biggest_num = num2 : biggest_num;
    num3 > biggest_num ? biggest_num = num3 : biggest_num;
    num4 > biggest_num ? biggest_num = num4 : biggest_num;
    
    for (int i = 2; i <= biggest_num; i++) {
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0 && num4 % i == 0) {
            biggest_divisor = i;
        }
    }
    
    return biggest_divisor;
}
