#include<iostream>
using namespace std;
class A
{
    int a1,a2;
    public:
    A()
    {
        cout<<"\nDefault";
        a1=0;
        a2=0;
    }
    A(int a1,int a2)
    {
        this->a1=a1; //or (*this).a1=a1
        this->a2=a2; //or (*this).a2=a2
    }
    void display()
    {
        cout<<"\na1 = "<<a1<<"\na2 = "<<a2;
    }
};
int main()
{
    A obj1,obj2(30,70); //static
    A *obj3=new A(); //dynamic allocation
    A *obj4=new A(100,200);
    obj1.display();
    obj2.display();
    obj3->display();
    obj4->display();
    return 0;
}