#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    Person()
    {
        cout<<"\n Person default";
        name="default";
        age=18;
    }
    Person(string name,int age)
    {
        cout<<"\n Person parametrized";
        this->name=name;
        (*this).age=age;
    }
    void displayPerson()
    {
        cout<<"\n Name : "<<name<<"\n Age : "<<age;
    }
};
class Student:public Person
{
    string rollno;
    public:
    Student()
    {
        cout<<"\n Student default";
        rollno="25CSU000";
    }
    Student(string nm,int ag,string rn):Person(nm,ag)
    {
        cout<<"\n Student parametrized";
        rollno=rn;
    }
    void displayStudent()
    {
        displayPerson();
        cout<<"\n Rollno : "<<rollno;
    }
};

int main()
{
    Student p1,p2("Section B",18,"25CSU057");
    p1.displayStudent();
    p2.displayStudent();
    return 0;
}
