//average mark of 3 students
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m1,m2,m3;
    cout<<"Enter 1st student's mark:";
    cin>>m1;
    cout<<"Enter 2nd student's mark:";
    cin>>m2;
    cout<<"Enter 3rd student's mark";
    cin>>m3;
    int avg=(m1+m2+m3)/3;
    cout<<"Average of the 3 students is "<<avg;

    return 0;
}