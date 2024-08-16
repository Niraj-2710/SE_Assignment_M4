// Write a program to concatenate the two strings using Operator Overloading 

#include <iostream>
#include <cstring>
using namespace std;

class String 
{
private:
    char str[100];

public:
   
    String(const char* s = "") 
	{
        strcpy(str, s);
    }

    String operator+(const String& S) 
	{
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, S.str);
        return temp;
    }

    void display() const 
	{
        cout << str << endl;
    }
};

int main() 
{
    String str1("Hello, ");
    String str2("World!");

    String str3 = str1 + str2;

	cout << "\n\n\t ----- program to concatenate the two strings using Operator Overloading -----";
    cout << "\n\n\t Concatenated String : ";
    str3.display();

}

