/* Write a program to swap the two numbers using friend function without 
using third variable */


#include <iostream>
using namespace std;

class Number 
{
	private:
    	int value;

public:
    
    Number(int v) : value(v) {}
    friend void swap(Number &a, Number &b);


    void display() const 
	{
        cout << value << endl;
    }
};

void swap(Number &a, Number &b) 
{
    a.value = a.value + b.value;
    b.value = a.value - b.value;
    a.value = a.value - b.value;
}

int main() 
{
    Number num1(10);
    Number num2(20);

    cout << "\n\n\t --- Before Swapping ---" << endl;
    cout << "\n\n\t num1 : ";
    num1.display();
    cout << "\n\n\t num2 : ";
    num2.display();

    swap(num1, num2);
    
    cout << "\n\n\t --- After Swapping ---" << endl;
    cout << "\n\n\t num1 : ";
    num1.display();
    cout << "\n\n\t num2 : ";
    num2.display();
}

