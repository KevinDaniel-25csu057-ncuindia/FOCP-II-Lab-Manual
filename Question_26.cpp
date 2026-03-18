#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int total = 0;
    // Input marks
    cout << "Enter marks for 5 subjects:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    // Calculate total
    for(int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    // Calculate percentage
    float percentage = total / 5.0;
    // Output
    cout << "\nTotal = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    return 0;
}