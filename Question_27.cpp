#include<iostream>
using namespace std;
int main()
{
    float price[10];
    // Input prices
    cout << "Enter prices of 10 items:\n";
    for(int i = 0; i < 10; i++)
    {
        cin >> price[i];
    }
    // Assume first element is max
    float max = price[0];
    // Find maximum
    for(int i = 1; i < 10; i++)
    {
        if(price[i] > max)
        {
            max = price[i];
        }
    }
    cout << "\nMaximum price = " << max << endl;

    return 0;
}