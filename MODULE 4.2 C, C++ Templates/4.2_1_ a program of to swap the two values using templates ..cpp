// Write a program of to swap the two values using templates 

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) 
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() 
{
    int int1 = 10, int2 = 20;
    cout << "\n\n\t--> Before swapping : int1 = " << int1 << ", int2 = " << int2 << endl;
    swapValues(int1, int2);
    cout << "\n\n\t--> After swapping : int1 = " << int1 << ", int2 = " << int2 << endl;

    
    double double1 = 1.5, double2 = 2.5;
    cout << "\n\n\t--> Before swapping : double1 = " << double1 << ", double2 = " << double2 << endl;
    swapValues(double1, double2);
    cout << "\n\n\t--> After swapping : double1 = " << double1 << ", double2 = " << double2 << endl;

    
    char char1 = 'A', char2 = 'B';
    cout << "\n\n\t--> Before swapping: char1 = " << char1 << ", char2 = " << char2 << endl;
    swapValues(char1, char2);
    cout << "\n\n\t--> After swapping : char1 = " << char1 << ", char2 = " << char2 << endl;

}

