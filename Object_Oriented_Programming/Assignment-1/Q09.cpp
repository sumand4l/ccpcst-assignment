// Q09. Swap two numbers without using third variable

#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Enter two Numbers: " << endl;
    cin >> a >> b;
    cout << "Before Swap a: " << a << " b: " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap a: " << a << " b: " << b << endl;
    return 0;
}