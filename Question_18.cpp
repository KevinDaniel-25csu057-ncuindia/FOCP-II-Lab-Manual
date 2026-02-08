//string palindrome
#include <iostream>
using namespace std;
int main() {
    string s;
    int flag = 0;
    cout << "Enter ID: ";
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Palindrome ID";
    else
        cout << "Not a Palindrome ID";
    return 0;
}