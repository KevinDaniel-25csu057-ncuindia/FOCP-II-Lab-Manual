//calculator that does basic mathematical operations
#include <iostream>
using namespace std;
int main() {
    int choice;
    double n1, n2;
    do {
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> n1 >> n2;
        }
        switch (choice) {
            case 1:
                cout << "Result = " << n1 + n2 << endl;
                break;
            case 2:
                cout << "Result = " << n1 - n2 << endl;
                break;
            case 3:
                cout << "Result = " << n1 * n2 << endl;
                break;
            case 4:
                if (n2 != 0)
                    cout << "Result = " << n1 / n2 << endl;
                else
                    cout << "Division by zero not allowed!" << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    return 0;

}