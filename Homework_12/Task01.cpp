#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;
	int * arr = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		std::cout << arr[n - i - 1] << ' ';
	}

	delete[] arr;
}
