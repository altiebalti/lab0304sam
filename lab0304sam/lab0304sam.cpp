// lab0304sam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Output.hpp"
#include "Point.hpp"
#include "Triangle.hpp"
#include "Quadrangle.hpp"


int main()
{   
    Output intr("Tymchenko Oleksandr", "K-13", "18", "Check if quadrangle is in triangle");
    intr.introduce_work();
    
    std::cout << "Enter your triangle\n";
    Triangle T;
    std::cout << "Enter your Quadrangle\n";
    Quadrangle Q;
       
    std::cout << (Q.isInTriangle(T) ? "YES" : "NO");

    intr.sayGoodBye();
    
   
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
