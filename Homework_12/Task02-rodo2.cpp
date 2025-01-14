#include <iostream>

int countOccurences(int arr[], int n, int k) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            counter++;
        }
    }
    return counter;
}

void printDvisors(int arr1[], int arr2[], int n1, int n2, int k) {
    int num_occurences = countOccurences(arr1, n1, k) + countOccurences(arr2, n2, k);
    int* res_arr = new int[num_occurences];
    int index = 0;

    for (int i = 0; i < n1; i++) {
        if (arr1[i] % k == 0) {
            res_arr[index] = arr1[i];
            index++;
        }
    }

    for (int i = 0; i < n2; i++) {
        if (arr2[i] % k == 0) {
            res_arr[index] = arr2[i];
            index++;
        }
    }

    for (int i = 0; i < num_occurences; i++) {
        std::cout << res_arr[i];
    }

    delete[] res_arr;
}

void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
}

int main()
{
    int n1, n2, k;
    std::cin >> k;
    std::cin >> n1;
    int* arr1 = new int[n1];
    inputArr(arr1, n1);
    std::cin >> n2;
    int* arr2 = new int[n2];
    inputArr(arr2, n2);
    delete[] arr1;
    delete[] arr2;
}
