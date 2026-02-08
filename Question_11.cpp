//calculating total expense and applying discount accordingly
#include <iostream>
using namespace std;
int main() {
    int quantity;
    float itemprice, total, discount = 0, finalAmount;
    cout << "Enter quantity of items: ";
    cin >> quantity;
    cout << "Enter price per item: ";
    cin >> itemprice;
    total = quantity * itemprice;
    if (quantity > 1000)
    {
        discount = total * 0.10;  
    }
    finalAmount = total - discount;
    cout << "\nTotal Amount  : " << total << endl;
    cout << "Discount      : " << discount << endl;
    cout << "Final Amount  : " << finalAmount << endl;
    return 0;
}