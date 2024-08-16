/*
	Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)

*/

#include <iostream>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int totalRuns;
    int bestPerformance;

public:
    void inputData() 
	{
        cout << "\n\n\t Enter name : ";
        cin >> name;
        cout << "\n\n\t Enter total runs : ";
        cin >> totalRuns;
        cout << "\n\n\t Enter best score : ";
        cin >> bestPerformance;
    }
};

class Batsman : public Cricketer 
{
private:
    int numMatches;
    double avgRuns;

public:
    void calculateAverage() 
	{
        cout << "\n\n\t Enter the matches played : ";
        cin >> numMatches;
        avgRuns = (double) totalRuns / numMatches;
    }

    void displayData() 
	{
        cout << "\n\n\t ----- Batsman Details -----\n";
        cout << "\n\n\t Name : " << name << endl;
        cout << "\n\n\t Total runs : " << totalRuns << endl;
        cout << "\n\n\t Best score : " << bestPerformance << endl;
        cout << "\n\n\t Average runs : " << avgRuns << endl;
    }
};

int main() 
{
    Batsman player1;
    player1.inputData();
    player1.calculateAverage();
    player1.displayData();

}

