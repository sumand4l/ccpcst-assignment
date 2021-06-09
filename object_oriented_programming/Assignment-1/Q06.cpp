// Q06. Read a value and print to decimal, octal and hexadecimal

#include<iostream>
#include<math.h>
using namespace std;

// decimal to octal 
int do_octal (int deci) {
    int oct = 0, rem = 0, i = 0;
    while (deci != 0) {
        rem = deci % 8;
        oct = oct + rem * pow (10,i); //in decending algo eg. octal(9999) -> 23417     
        // oct = (oct * 10) + rem; //in ascending algo eg. octal(9999) -> 71432 [not related to this program]
        deci = deci / 8;
        i++;
    }
    return oct;
}

//decimal to hexadecimal
void do_hexa (int deci) {
    char hexadecimal[100];
    int i = 0;
    while (deci != 0) {
        int rem = 0;
        rem = deci % 16;
        if (rem <= 10) {
            hexadecimal[i] = rem + 48;
            i++;
        }
        else {
            hexadecimal[i] = rem + 55;
            i++;
        }
    deci = deci / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hexadecimal[j];
}

int main () {
    int n;
    cout << "Enter Decimal Number: " << endl;
    cin >> n;
    cout << "Octal no. " << do_octal(n) << endl;
    cout << "Hexadecimal no. ";
    do_hexa(n);
    cout << endl;
    return 0;
}
