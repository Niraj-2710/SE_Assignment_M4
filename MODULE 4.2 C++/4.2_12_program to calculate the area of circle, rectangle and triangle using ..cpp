/* Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading */

#include <iostream>
using namespace std;

class AreaCalculator 
{
public:
    double area(double length, double breadth) 
	{
        return length * breadth;
    }

    double area(double base, double height, bool isTriangle) 
	{
        return 0.5 * base * height;
    }

    double area(double radius) 
	{
        const double pi = 3.14159265358979323846;
        return pi * radius * radius;
    }
};

int main() 
{
    AreaCalculator calculator;

    double length = 10.0;
    double breadth = 5.0;
    cout << "\n\n\t Area of Rectangle: " << calculator.area(length, breadth) << endl;

    double base = 8.0;
    double height = 4.0;
    cout << "\n\n\t Area of Triangle: " << calculator.area(base, height, true) << endl;

    
    double radius = 7.0;
    cout << "\n\n\t Area of Circle: " << calculator.area(radius) << endl;

}

