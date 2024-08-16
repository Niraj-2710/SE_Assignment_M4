/* Write a program of Addition, Subtraction, Division, Multiplication using 
constructor. */

#include <iostream>
using namespace std;

class Calculator 
{
private:
    double num1, num2;

public:
    
    Calculator(double n1, double n2) 
	{
        num1 = n1;
        num2 = n2;
    }

     add() 
	{
        return num1 + num2;
    }

     subtract() 
	{
        return num1 - num2;
    }

     multiply() 
	{
        return num1 * num2;
    }

     divide() 
	{
        if (num2 != 0) 
		{
            return num1 / num2;
        } 
		else 
		{
            cout << "\n\n\t Error: Division by zero!";
            return 0;
        }
    }
};

 main() 
{
    double val1, val2;

    cout << "\n\n\t Enter a number : ";
    cin >> val1;
    cout << "\n\n\t Enter a number :";
    cin >> val2;
    

    Calculator calc(val1, val2);

    cout << "\n\n\t Sum : " << calc.add() << endl;
    cout << "\n\n\t Difference : " << calc.subtract() << endl;
    cout << "\n\n\t Product : " << calc.multiply() << endl;
    cout << "\n\n\t Quotient : " << calc.divide() << endl;

    return 0;
}

