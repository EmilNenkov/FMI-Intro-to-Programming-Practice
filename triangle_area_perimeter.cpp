// triangle_area_perimeter.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float side1;
    float side2;
    float side3;
    float result_perimeter;
    float result_area;
    float semi_perimeter;

    std::cin >> side1;
    std::cin >> side2;
    std::cin >> side3;

    result_perimeter = side1 + side2 + side3;
    semi_perimeter = result_perimeter / 2;
    result_area = sqrt(semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3));

    std::cout << "Area: " << result_area << '\n';
    std::cout << "Perimeter: " << result_perimeter;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
