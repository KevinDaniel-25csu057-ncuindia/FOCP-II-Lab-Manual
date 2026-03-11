#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main()
{
    cout<<sum(5,6);
    cout<<sum(5.6678f,6.7789f);
    cout<<sum(5.6678,6.7789);
    return 0;
}
int sum(int a,int b)
{
    cout<<"\n Int Sum : ";
    return(a+b);
}
float sum(float a,float b)
{
    cout<<"\n Float sum :  ";
    return(a+b);
}
double sum(double a,double b)
{
    cout<<"\n Double Sum : ";
    return(a+b);
}