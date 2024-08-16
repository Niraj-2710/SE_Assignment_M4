/* Write a program to Mathematic operation like Addition, Subtraction, 
   Multiplication, Division Of two number using different parameters and 
   Function Overloading */

#include <iostream>
using namespace std;


int operate(int a, int b) 
{
    return a + b;
}

double operate(double a, double b) 
{
    return a + b;
}

int operate(int a, int b, char op) 
{
    if (op == '-') 
	{
        return a - b;
    }
    return 0;
}

double operate(double a, double b, char op) 
{
    if (op == '-') 
	{
        return a - b;
    }
    return 0.0;
}

int operate(int a, int b, char op1, char op2) 
{
    if (op1 == '*' && op2 == '*') 
	{
        return a * b;
    }
    return 0;
}


double operate(double a, double b, char op1, char op2) 
{
    if (op1 == '*' && op2 == '*') 
	{
        return a * b;
    }
    return 0.0;
}

int operate(int a, int b, char op1, char op2, char op3) 
{
    if (op1 == '/' && op2 == '/' && op3 == '/') 
	{
        return a / b;
    }
    return 0;
}

double operate(double a, double b, char op1, char op2, char op3) 
{
    if (op1 == '/' && op2 == '/' && op3 == '/') 
	{
        return a / b;
    }
    return 0.0;
}

int main() 
{
    int a = 10, b = 5;
    double x = 10.5, y = 5.5;

    cout << "\n\n\t Addition of integers : " << operate(a, b) << endl;
    cout << "\n\n\t Addition of doubles : " << operate(x, y) << endl;

    cout << "\n\n\t Subtraction of integers : " << operate(a, b, '-') << endl;
    cout << "\n\n\t Subtraction of doubles : " << operate(x, y, '-') << endl;

    cout << "\n\n\t Multiplication of integers : " << operate(a, b, '*', '*') << endl;
    cout << "\n\n\t Multiplication of doubles : " << operate(x, y, '*', '*') << endl;

    cout << "\n\n\t Division of integers : " << operate(a, b, '/', '/', '/') << endl;
    cout << "\n\n\t Division of doubles : " << operate(x, y, '/', '/', '/') << endl;
}

