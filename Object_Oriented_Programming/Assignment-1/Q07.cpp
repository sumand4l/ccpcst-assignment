//Q07. Check a number Armstrong number or not

#include <iostream>
#include <math.h>
using namespace std;

//count digit
int count (int num) {
    int c = 0;
    while (num != 0) {
        c++;
        num = num / 10;
    }
    return c;
}

int main () {
    int n, rem = 0, arm = 0;
    cout << "Enter any number to check Armstrong Number: " << endl;
    cin >> n;
    int c = count (n);
    int temp = n;
    //calculate armstrong
    while (n != 0) {
        rem = n % 10;
        arm = arm + pow (rem,c);
        n = n / 10;
    }
    if (temp == arm)
        cout << temp << " is Armstrong Number." << endl;
    else 
        cout << temp << " is Not Armstrong Number." << endl;
}