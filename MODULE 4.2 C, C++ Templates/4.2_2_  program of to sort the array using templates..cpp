// Write a program of to sort the array using templates.

#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - 1 - i; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) 
{
    for (int i = 0; i < size; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    
    cout << "\n\n\t --> Integer array before sorting: ";
    printArray(intArray, intSize);
    sortArray(intArray, intSize);
    
    cout << "\n\n\t --> Integer array after sorting: ";
    printArray(intArray, intSize);


    char charArray[] = {'z', 'a', 'u', 'b', 'm'};
    int charSize = sizeof(charArray) / sizeof(charArray[0]);
    
    cout << "\n\n\t --> Character array before sorting: ";
    printArray(charArray, charSize);
    sortArray(charArray, charSize);
    
    cout << "\n\n\t --> Character array after sorting: ";
    printArray(charArray, charSize);


}

