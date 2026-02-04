//finding the area of a fountain
#include<iostream>
using namespace std;
int main()
{
    int r;
    float pi=3.14,area;
    cout<<"Enter the radius of the fountain:";
    cin>>r;
    area = pi * r * r;
    cout<<"Area of the fountain is "<<area;

    return 0;
}