// Q05. Check a number prime or not

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool flag = true;
    cout << "Enter a number to check prime or not: " << endl;
    cin >> n;
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << n << " is a Prime Number." << endl;
    else
        cout << n << " is not a Prime Number." << endl;
    return 0;
}