#include<iostream>
using namespace std;
int main()
{
    int n=5; //no. of rows in upper half
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) //for left stars
        {
            cout<<"*";
        }

        for(int j=1;j<=2*(n-i);j++) //for spaces
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++) //for right stars
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--) //lower half
    {
        for(int j=1;j<=i;j++) //for left stars
        {
            cout<<"*";
        }
         
        for(int j=1;j<=2*(n-i);j++) //for spaces
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++) //for right stars
        {
            cout<<"*";
        }
        cout<<endl;
    }
}