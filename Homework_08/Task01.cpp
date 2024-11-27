#include <iostream>

constexpr int SIZE = 128;

void inputArr(int rows_count, int cols_count, int arr[][SIZE]);
void printArr(int rows_count, int cols_count, int arr[][SIZE]);

int main()
{
    int rows_count, cols_count;
    std::cin >> rows_count >> cols_count;
    int arr[SIZE][SIZE];
    inputArr(rows_count, cols_count, arr);
    printArr(rows_count, cols_count, arr);
}

void inputArr(int rows_count, int cols_count, int arr[][SIZE]) {
    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < cols_count; j++) {
            int value;
            std::cin >> value;
            arr[i][j] = value;
        }
    }
}

int returnDigitCount(int num) {
    int counter = 0;
    while (num) {
        num /= 10;
        counter++;
    }
    
    return counter;
}

void printArr(int rows_count, int cols_count, int arr[][SIZE]) {
    int highest_digit = 1;

    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < cols_count; j++) {
            returnDigitCount(arr[i][j]) > highest_digit ? highest_digit = arr[i][j] : highest_digit;
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < cols_count; j++) {
            std::cout << ' ';
            for (int k = 0; k < highest_digit - returnDigitCount(arr[i][j]); k++) {
                std::cout << ' ';
            }
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << highest_digit;
}


