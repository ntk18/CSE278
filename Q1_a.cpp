/*
Nate Elli
*/
#include<iostream>


int main()
{
    int num = 0;
    std::cout << "Please enter the width: ";
    
    int width;
    std::cin >> width;

    std::cout << "Please enter the height: ";
   
    int length;
    std::cin >> length; 

    std::cout << "The perimeter is " << 2 * (width + length) <<
    std::endl;

    std::cout << "The area is " << width * length <<
    std::endl;

    return 0;
}