/* Write a program to find the multiplication values and the cubic values using 
inline function */

#include <iostream>
using namespace std;

class MathOperations 
{
public:
  
    inline float multiply(float x, float y) 
	{
        return x * y;
    }

    inline float cube(float x) 
	{
        return x * x * x;
    }
};

int main()
{
    MathOperations obj;
    float val1, val2;

    cout << "\n\n\t Enter two values : ";
    cin >> val1 >> val2;

    cout << "\n\n\t Multiplication value is : " << obj.multiply(val1, val2);
    cout << "\n\n\t Cube value for " << val1 << " is : " << obj.cube(val1);
    cout << "\n\n\t Cube value for " << val2 << " is : " << obj.cube(val2);

}

