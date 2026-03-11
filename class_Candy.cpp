#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string c,int p);
    void displayCandy();
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
int main()
{
    Candy c1,c2;
    string clr; int pts;
    cout<<"\n Provide color and points : ";
    cin>>clr>>pts;
    c1.setCandy(clr,pts);
    c1.displayCandy();
    cout<<"\n Provide color and points : ";
    cin>>clr>>pts;
    c2.setCandy(clr,pts);
    c2.displayCandy();
}
