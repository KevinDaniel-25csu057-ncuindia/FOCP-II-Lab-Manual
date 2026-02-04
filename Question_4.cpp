//bill generation with discount
#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, amount, discount, finalAmount;

    cout << "Enter Item Number : ";
    cin >> itemNo;

    cout << "Enter Quantity    : ";
    cin >> quantity;

    cout << "Enter Unit Price  : ";
    cin >> unitPrice;

    amount = quantity * unitPrice;
    discount = amount * 0.20;   // 20% discount
    finalAmount = amount - discount;

    cout << "\n----------------------------------\n";
    cout << "             BILL                 \n";
    cout << "----------------------------------\n";
    cout << "Item Number   : " << itemNo << endl;
    cout << "Quantity      : " << quantity << endl;
    cout << "Unit Price    : " << unitPrice << endl;
    cout << "----------------------------------\n";
    cout << "Total Amount  : " << amount << endl;
    cout << "Discount 20%  : " << discount << endl;
    cout << "----------------------------------\n";
    cout << "Net Amount    : " << finalAmount << endl;
    cout << "----------------------------------\n";

    return 0;
}