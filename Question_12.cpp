//checking the type of triangle
#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) 
    {
        if (a == b && b == c)
            cout << "Equilateral Triangle";
        else if (a == b || b == c || a == c)
            cout << "Isosceles Triangle";
        else
            cout << "Scalene Triangle";
    }
    else {
        cout << "Not a valid triangle";
    }
    return 0;
}