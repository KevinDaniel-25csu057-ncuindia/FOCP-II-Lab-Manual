#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A();
    A(int n1);
    A(int n1, int n2);
    void display();
    ~A();
};
A::A():x(0),y(0) {}
A::A(int n1):x(n1),y( n1) {}
A::A(int n1,int n2):x(n1),y(n2) {}
void A:: display()
{
    cout<<"\n x = "<<x<<"\n y = "<<y;
}
A::~A()
{
    cout<<"\n Object Destroyed";
}
int main()
{
    A a1,a2(10),a3(10,20);
    a1.display();
    a2.display();
    a3.display();
}