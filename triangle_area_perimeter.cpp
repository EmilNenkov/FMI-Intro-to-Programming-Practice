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

