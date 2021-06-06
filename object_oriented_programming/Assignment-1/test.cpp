#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter two number: " << endl;
    cin >> a >> b;
    // using if-else
    if (a > b)
        cout << a << " is larger" << endl;
    else
        cout << b << " is larger" << endl;
    //ternary operator
    int larger = (a > b) ? a : b; 
    cout << larger << " is larger" << endl;
    // Or
    cout << ((a > b) ? a : b) << " is larger." << endl;



    // cout << a << " " << b << " is number & char" << endl;
    // cout << " Arnab is a good boy" << endl;
    return 0;
}