//Q02. Write inline function for cube of a number

#include <iostream> 
using namespace std;

inline int cube (int n) {
    return (n * n * n);
}

int main () {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << cube (num) << endl;
    return 0;
}