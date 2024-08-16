/* Write a program to find the max number from given two numbers using 
friend function */

#include <iostream>
using namespace std;

class Number 
{
	private:
    int value;

public:
   
    Number(int v) : value(v) {}

    friend int findMax(Number &a, Number &b);

    void display() const 
	{
        cout << value << endl;
    }
};

int findMax(Number &a, Number &b) 
{
    return (a.value > b.value) ? a.value : b.value;
}

int main() 
{

    Number num1(100);
    Number num2(200);

    int maxNumber = findMax(num1, num2);

	cout << "\n\n\t --- the given number of is 100 or 200";
    cout << "\n\n\t The maximum number is: " << maxNumber << endl;

}

