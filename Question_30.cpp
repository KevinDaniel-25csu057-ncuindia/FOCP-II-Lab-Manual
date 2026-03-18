#include<iostream>
using namespace std;
int main()
{
    float salary[10];
    float total = 0;
    cout << "Enter salaries of 10 employees:\n";
    for(int i = 0; i < 10; i++)
    {
        cin >> salary[i];
    }
    for(int i = 0; i < 10; i++)
    {
        total += salary[i];
    }
    float average = total / 10;
    cout << "\nTotal Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;
    return 0;
}