#include<iostream>
#include<cmath>
using namespace std;
int main()
{   
    int n;
    cout<<"\nEnter a number:";
    cin>>n;
    //checking for perfect number
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    cout<<"\nPerfect Number";
    else
    cout<<"\nNot a Perfect Number";
    
    //checking for armstrong number
    int temp=n, digits=0;
    while(temp>0)
    {
        digits++;
        temp/=10;
    }
    temp=n;
    int arm=0;
    while(temp>0)
    {
        int d=temp%10;
        arm+=pow(d,digits);
        temp/=10;
    }
    if(arm==n)
    cout<<"\nArmstrong Number";
    else
    cout<<"\nNot an Armstrong Number";
    return 0;
}