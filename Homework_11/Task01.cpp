#include <iostream>

void inputArr(char* arr, unsigned int n) {

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

void sortArrs(char* arr1, char* arr2, char* res_arr, unsigned int n1, unsigned int n2) {
    unsigned int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            res_arr[k++] = arr1[i++];
        }
        else {
            res_arr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        res_arr[k++] = arr1[i++];
    }

    while (j < n2) {
        res_arr[k++] = arr2[j++];
    }

    res_arr[k] = '\0';
}

void printArr(char* res_arr) {
    std::cout << res_arr << std::endl;
}

int main() {
    char* arr1 = new char[32];
    char* arr2 = new char[32];
    char* res_arr = new char[64];
    unsigned int n1, n2;

    std::cin >> n1;
    inputArr(arr1, n1);

    std::cin >> n2;
    inputArr(arr2, n2);

    sortArrs(arr1, arr2, res_arr, n1, n2);
    printArr(res_arr);
}
