//prime numbers in range
#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter start and end of range: ";
    cin >> start >> end;
    for (int n = start; n <= end; n++) 
    {
        if (n <= 1)
            continue;
        int flag = 0; 

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) 
            {
                flag = 1;   
                break;
            }
        }
        if (flag == 0)
            cout << n << " ";
    }
    return 0;
}