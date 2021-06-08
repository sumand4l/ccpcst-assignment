// Q04. Print Fibonacci Series

#include <iostream>
using namespace std;

int main () {
    int a = 0, b = 1, c, limit;
    cout << "Enter Nth term to Print the Series: " << endl;
    cin >> limit;
    cout << "Fibonacci Series is: " << a << " " << b << " "; 
    for (int i = 0; i <= limit; i++) {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
    cout << endl;
    return 0;
}