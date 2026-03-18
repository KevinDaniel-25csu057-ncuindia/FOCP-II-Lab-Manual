#include<iostream>
using namespace std;
// PRIME CHECK FUNCTION
bool isPrime(int num)
{
    if(num <= 1) return false;

    for(int i = 2; i*i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
// PASSWORD CHECK FUNCTION
bool isValidPassword(string pwd)
{
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for(char ch : pwd)
    {
        if(ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if(ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if(ch >= '0' && ch <= '9')
            hasDigit = true;
        else if(ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='!'||ch=='&'||ch=='*')
            hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main()
{
    //PRIME VALIDATION
    int start = 10, end = 30;

    cout << "Prime Numbers:\n";
    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }
    cout << "\n\n";

    //PASSWORD VALIDATION
    string password = "Abc@123";
    cout << "Password Check:\n";
    if(isValidPassword(password))
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}