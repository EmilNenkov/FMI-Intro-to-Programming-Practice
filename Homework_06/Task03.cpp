#include <iostream>

void reverseArray(int arr[], size_t size) {
    for (int i = 0; i < size / 2; i++) {
     
        int temp = arr[size - i - 1];
        arr[size - i - 1] = arr[i];
        arr[i] = temp;     
    }
};

void printReversedArr(int arr[], size_t size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
}

constexpr int SIZE = 100;

int main()
{
    int n;
    std::cin >> n;

    if (n <= 0 || n > 100) {
        std::cout << "Invalid length!";
        return -1;
    }
    
    int arr[SIZE]{};

    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        arr[i] = num;
    }

    reverseArray(arr, n);
    printReversedArr(arr, n);
}
