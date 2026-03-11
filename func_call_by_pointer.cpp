//function call by pointer
#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout<<"\nA and B before swap in function : "<<*a<<" "<<*b;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nA and B after swap function : "<<*a<<" "<<*b;
}

int main()
{
    int x,y;
    cout<<"\nEnter 2 integers "<<endl;
    cin>>x>>y;
    cout<<"\nValues of X and Y before function call : "<<x<<" "<<y;
    swap(&x,&y);
    cout<<"\nValues of X and Y after function call : "<<x<<" "<<y;
    return 0;
}