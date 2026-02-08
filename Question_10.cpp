//checking if the year is leap year or not(29 days in February)
#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
    return 0;
}