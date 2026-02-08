//swapping two variables using addition and subtraction
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st variable:";
    cin>>a;
    cout<<"Enter 2nd variable:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of 1st variable after swapping is "<<a<<endl;
    cout<<"The value of 2nd variable after swapping is "<<b<<endl;
    return 0;
}