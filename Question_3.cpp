//Converting celsius to farenheit and vice versa
#include<iostream>
using namespace std;
int main()
{
    float temp,C,F;
    cout<<"Enter the temperature in Celsius:";
    cin>>temp;
    F=(9.0/5.0)*temp+32;
    cout<<"The temperature in Farenheit is "<<F<<endl;
    cout<<"Enter the temperature in Farenheit:";
    cin>>temp;
    C=(5.0/9.0)*(temp-32);
    cout<<"The temperature in Celsius is "<<C<<endl;
    return 0;
}