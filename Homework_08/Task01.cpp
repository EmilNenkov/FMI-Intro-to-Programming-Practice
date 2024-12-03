#include <iostream>

constexpr int SIZE = 128;

void inputArr (int rows_count, int cols_count, int arr[][SIZE]);
void printArr (int rows_count, int cols_count, int arr[][SIZE]);

int main() {
    
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

void printArr(int rows_count, int cols_count, int arr[][SIZE]) {
    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < cols_count; j++) {
            std::cout << ' ';
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

