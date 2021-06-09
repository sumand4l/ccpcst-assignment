//Q08. Check a number Palindrome or not

#include <iostream>
using namespace std;

int main () {
    int n, i = 0, rev = 0, rem, temp;
    cout << "Enter any number: " << endl;
    cin >> n;
    temp = n;
    while (n != 0) {
        rem = n % 10;
        rev =  rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev)
        cout << temp << " is Palindrome." << endl;
    else 
        cout << temp << " is NOT Palindrome." << endl;
    return 0;
}