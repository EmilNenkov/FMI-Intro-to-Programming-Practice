#include <iostream>

int main()
{
	int raw_seconds, days, hours, minutes, seconds;
	days = 0, hours = 0, minutes = 0, seconds = 0;
	std::cin >> raw_seconds;

	while (raw_seconds) {
		if (raw_seconds >= 86400) {
			days++;
			raw_seconds -= 86400;
		}
		else if (raw_seconds >= 3600) {
			hours++;
			raw_seconds -= 3600;
		}
		else if (raw_seconds >= 60) {
			minutes++;
			raw_seconds -= 60;
		}
		else {
			seconds += raw_seconds;
			raw_seconds = 0;
		}
	}

	std::cout << days << " days, ";
	std::cout << hours << " hours, ";
	std::cout << minutes << " minutes, ";
	std::cout << seconds << " seconds";
}
