#include<iostream>
#include<iomanip>
using namespace std;
class Car
{
    string brand;
    float price;
    int make;
    string colour;
    public:
    void input_details()
    {
        cout<<"\nEnter Brand:";
        cin>>brand;
        cout<<"Enter Price:";
        cin>>price;
        cout<<"Enter Make Year:";
        cin>>make;
        cout<<"Enter colour:";
        cin>>colour;
    }
    void display_details()
    {
        cout<<"\n Brand Name:"<<brand<<"\n Price:"<<fixed<<price<<"\n Make Year:"<<make<<"\n Colour:"<<colour<<endl;
    }
};

int main()
{
    Car C1,C2;
    C1.input_details();
    C1.display_details();
    C2.input_details();
    C2.display_details();

}