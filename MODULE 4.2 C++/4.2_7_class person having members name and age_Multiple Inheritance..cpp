/* Create a class person having members name and age. Derive a class student 
   having member percentage. Derive another class teacher having member 
   salary. Write necessary member function to initialize, read and write data. 
   Write also Main function (Multiple Inheritance) */

#include <iostream>
using namespace std;

class Person 
	{
		protected:
    	string name;
    	int age;
			public:
    			void setPerson(string n, int a) 
			{
       		 name = n;
        	 age = a;
   			}
    void displayPerson() 
	{
        cout << "\n\n\t Name : " << name << endl;
        cout << "\n\n\t Age : " << age << endl;
    }
};

class Student : public Person 
{
	protected:
    float percentage;
		public:
  				void setStudent(string n, int a, float p) {
        		setPerson(n, a);
       			percentage = p;
}
    			void displayStudent() 
	{
        displayPerson();
        cout << "\n\n\t Percentage : " << percentage << "%" << endl;
    }
};

class Teacher : public Person 
{
	protected:
			float salary;
	public:
   			 void setTeacher(string n, int a, float s) 
	{
        setPerson(n, a);
        salary = s;
    }
   		 void displayTeacher() 
	{
        displayPerson();
        cout << "\n\n\t Salary : " << salary << endl;
    }
};

int main() 
{
    Student s;
    s.setStudent("vk", 36, 65.55);
    cout << "\n\n\t -- Student Details " << endl;
    s.displayStudent();

    Teacher t;
    t.setTeacher("teach", 34, 10000);
    cout << "\n\n\t -- Teacher Details " << endl;
    t.displayTeacher();
}

