//finding roots for a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    float D, r1, r2;

    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Not a quadratic equation";
        return 0;
    }
    D = b*b - 4*a*c;
    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (D == 0) {
        r1 = -b / (2*a);
        cout << "Root = " << r1 << endl;
    }
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-D) / (2*a);
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i\n";
    }
    return 0;

}
