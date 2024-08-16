// WAP to create simple calculator using class

#include<iostream>
using namespace std;

class Calculator 
	{
   	 public:
         add(int a, int b) 
		{
            return a + b;
        }

         subtract(int a, int b) 
		{
            return a - b;
        }

         multiply(int a, int b) 
		{
            return a * b;
        }

         divide(int a, int b) 
		{
            if(b != 0)
                return a / b;
            else {
                cout << "\n\n\t Error! Division by zero is not allowed." << endl;
                return 0;
            }
        }
};

int main() {
    Calculator calc;
    int choice, a, b;

    cout << "\n\n\t --- Simple Calculator ---" << endl;
    cout << "\n\n\t -----------------------" << endl;
    cout << "\n\n\t 1. Addition" << endl;
    cout << "\n\n\t 2. Subtraction" << endl;
    cout << "\n\n\t 3. Multiplication" << endl;
    cout << "\n\n\t 4. Division" << endl;
    cout << "\n\n\t -- Enter your choice: ";
    cin >> choice;

    cout << "\n\n\t -- Enter first number: ";
    cin >> a;
    cout << "\n\n\t -- Enter second number: ";
    cin >> b;

    switch (choice) 
	{
        case 1:
            cout << "\n\n\t --> The Ans Is : " << calc.add(a, b) << endl;
            break;
        case 2:
            cout << "\n\n\t --> The Ans Is : " << calc.subtract(a, b) << endl;
            break;
        case 3:
            cout << "\n\n\t --> The Ans Is : " << calc.multiply(a, b) << endl;
            break;
        case 4:
            cout << "\n\n\t --> The Ans Is : " << calc.divide(a, b) << endl;
            break;
        default:
            cout << "\n\n\t --> Invalid choice." << endl;
    }

}
