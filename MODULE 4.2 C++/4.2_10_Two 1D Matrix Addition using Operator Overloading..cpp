// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix 
{
private:
    int *data;
    int size;

public:
    Matrix(int n) 
	{
        size = n;
        data = new int[n];
    }

    ~Matrix() 
	{
        delete[] data;
    }

    void setInput() 
	{
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) 
		{
            std::cin >> data[i];
        }
    }

    void display() 
	{
        cout << "Matrix: ";
        for (int i = 0; i < size; i++) 
		{
            cout << data[i] << " ";
        }
    }

    Matrix operator+(const Matrix &m) 
	{
        Matrix result(size);
        for (int i = 0; i < size; i++) 
		{
            result.data[i] = data[i] + m.data[i];
        }
        return result;
    }
};

int main() 
{
    int n;
    	cout << "\n\n\t Enter the size of the matrices : ";
    	cin >> n;

    Matrix m1(n);
    Matrix m2(n);

    cout << "\n\n\t Enter matrix 1 : ";
    m1.setInput();
    cout << "\n\n\t Enter matrix 2 : ";
    m2.setInput();

    Matrix result = m1 + m2;

    cout << "\n\n\t Matrix 1 : ";
    m1.display();
    cout << "\n\n\t Matrix 2 : ";
    m2.display();
    cout << "\n\n\t Result : ";
    result.display();

}
