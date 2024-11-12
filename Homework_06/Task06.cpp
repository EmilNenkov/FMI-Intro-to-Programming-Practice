#include <iostream>

void inputArr(int arr[], int n);
int avgArr(int arr[], int n);
int getAbsNum(int num);
int returnClosestToAverage(int arr[], int n, int average);

constexpr int SIZE = 128;

int main()
{
    int n, average, arr[SIZE];

    std::cin >> n;
    inputArr(arr, n);

    average = avgArr(arr, n);  
    std::cout << returnClosestToAverage(arr, n, average);
}

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int symbol;
        std::cin >> symbol;
        arr[i] = symbol; 
    }
}

int avgArr(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;  
}

int getAbsNum(int num) {
    return num < 0 ? -num : num;
}

int returnClosestToAverage(int arr[], int n, int average) {
    int closest = arr[0];
    int min_diff = getAbsNum(arr[0] - average);

    for (int i = 1; i < n; i++) {
        int diff = getAbsNum(arr[i] - average);
        if (diff < min_diff) {
            min_diff = diff;
            closest = arr[i];
        }
    }
    return closest;
}
