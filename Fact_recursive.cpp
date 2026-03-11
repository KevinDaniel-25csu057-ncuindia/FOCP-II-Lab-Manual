#include<iostream>
using namespace std;
int factorial(int x)
{
    if(x==1)
    return 1;
    else
    return x*factorial(x-1);
}
int main()
{
    int n;
    cout<<"\n Enter a number:";
    cin>>n;
    cout<<"\n Factorial is "<<factorial(n);
    return 0;
}