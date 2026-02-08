//swapping two variables using temp variable
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter 1st variable:";
    cin>>a;
    cout<<"Enter 2nd variable:";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"The value of 1st variable after swapping is "<<a<<endl;
    cout<<"The value of 2nd variable after swapping is "<<b<<endl;
    return 0;
}