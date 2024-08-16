#include <iostream>
using namespace std;

class Students 
{
	protected:
    	int rollNumber;
		public:
    		void setRollNumber(int roll) 
		{
        	rollNumber = roll;
    	}
    void displayRollNumber() 
	{
        cout << "\n\n\t Roll Number : " << rollNumber << endl;
    }
};

class Test : public Students 
{
	protected:
    	float subject1, subject2;
	public:
    	void setMarks(float s1, float s2) 
	{
        subject1 = s1;
        subject2 = s2;
    }
    	void displayMarks() 
		{
        	cout << "\n\n\t Marks in Subject 1 : " << subject1 << endl;
        	cout << "\n\n\t Marks in Subject 2 : " << subject2 << endl;
    	}
};

class Result : public Test 
{
    float total;
public:
    void calculateTotal() 
	{
        total = subject1 + subject2;
    }
    void displayResult() 
	{
        displayRollNumber();
        displayMarks();
        cout << "\n\n\t Total Marks : " << total << endl;
    }
};

int main() 
{
    Result student;
    student.setRollNumber(27);
    student.setMarks(65.33, 56.55);
    student.calculateTotal();
    cout << "\n\n\t -- Student Result --" << endl;
    student.displayResult();

}

