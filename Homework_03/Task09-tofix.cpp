#include <iostream>

int main()
{
	int day, month, year;
	std::cin >> day >> month >> year;
	
	int zero_based_century, year_of_century;
	zero_based_century = year / 100;
	year_of_century = year % 100;

	int day_of_week;
	day_of_week = ((month + ((13 * (month + 1)) / 5)) + year_of_century + (year_of_century / 4) + (zero_based_century / 4) - 2 * zero_based_century) % 7;

	switch (day_of_week) {
	case 0: std::cout << "Saturday"; break;
	case 1: std::cout << "Sunday"; break;
	case 2: std::cout << "Monday"; break;
	case 3: std::cout << "Tuesday"; break;
	case 4: std::cout << "Wednesday"; break;
	case 5: std::cout << "Thursday"; break;
	case 6: std::cout << "Friday"; break;
	default: std::cout << "Error"; break;
	}
}
