#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string c,int p);
    void displayCandy();
    Candy();
    Candy(string cl,int pt);
};
void Candy::setCandy(string c,int p)
{
    color=c; points=p;
}
void Candy::displayCandy()
{
    cout<<"\n Color : "<<color;
    cout<<"\n Points : "<<points;
}
Candy::Candy() //default
{
    color="Blue";
    points=50;
}
Candy::Candy(string cl,int pt) //parametrized constructor
{
    color=cl;
    points=pt;
}
int main()
{
    Candy c1,c2("Red",45);
    c1.displayCandy();
    c2.displayCandy();
}