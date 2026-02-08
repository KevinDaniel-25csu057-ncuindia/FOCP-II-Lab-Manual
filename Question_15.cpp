//finding the largest number
#include <iostream>
using namespace std;
int main()
{
    int n;
    double num, max;
    cout << "Enter number of entries: ";
    cin >> n;
    if (n <= 0) 
    {
        cout << "Invalid input";
        return 0;
    }
    cout << "Enter number 1: ";
    cin >> max;   
    for (int i = 2; i <= n; i++) 
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > max) 
        {
            max = num;
        }
    }
    cout << "\nMaximum value = " << max;
    return 0;
}