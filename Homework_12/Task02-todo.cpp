#include <iostream>

void printNumsDevisibleByK(int* arr, int n, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % k == 0) {
			std::cout << arr[i] << ' ';
		}
	}
}

int main()
{
	unsigned k, size1, size2;
	std::cin >> k >> size1 >> size2;

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];

	int* res_arr = new int[size1 ? size1 > size2 : size2];

	for (int i = 0; i < size1; i++) {
		std::cin >> arr1[i];
	}

	for (int i = 0; i < size2; i++) {
		std::cin >> arr2[i];
	}

	printNumsDevisibleByK(arr1, size1, k);
	printNumsDevisibleByK(arr2, size2, k);

	delete[] arr1;
	delete[] arr2;
}
