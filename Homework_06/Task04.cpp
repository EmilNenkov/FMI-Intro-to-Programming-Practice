#include <iostream>

bool checkIfArrPalindrome(char arr[], int n) {
	for (int i = 0; i < n / 2; i++) {
		if (arr[i] != arr[n - i - 1]) {
			return false;
		}
	}
	return true;
}

void inputArr(char arr[], int n) {
	for (int i = 0; i < n; i++) {
		char symbol;
		std::cin >> symbol;
		arr[i] = symbol;
	}

	std::cout << std::boolalpha << checkIfArrPalindrome(arr, n);
}

constexpr int SIZE = 513;

int main() {
	int n;
	std::cin >> n;
	char arr[SIZE];
	inputArr(arr, n);

	return 0;
}
