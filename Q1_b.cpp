/*
Nate Elli
*/

#include<iomanip>
#include<cmath>
#include<iostream>


int main()
{
    int num = 0;
    std::cout << "Please enter the radius: ";
    
    double radius;
    std::cin >> radius;

    double perimeter = 2 * radius * M_PI;
    double area = radius * radius * M_PI;

    std::cout << "The perimeter is " << std::setprecision(4) << perimeter << std::endl;
    std::cout << "The area is " << std::setprecision(4) << area << std::endl;

    return 0;
}