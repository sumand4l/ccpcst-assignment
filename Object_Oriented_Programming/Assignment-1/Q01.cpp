// Q01. Find the Greatest and Smallest of three Numbers

#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;
    cout << "Enter 3 Numbers: " << endl;
    cin >> num1 >> num2 >> num3;
    /*Using Ternary Operator*/
    cout << ((num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3)) << " is Greatest." << endl;
    cout << ((num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3)) << " is Smallest." << endl;
    return 0;
}
    
    /*Using if-elseif*/
    
    // //finding the largest
    // if (num1 > num2 && num1 > num3) 
    //     cout << num1 << " is Greatest." << endl;
    // else if  (num2 > num3)
    //     cout << num2 << " is Greatest." << endl;
    // else 
    //     cout << num3 << " is Greateset." << endl;
    // //finding the smallest
    // if (num1 < num2 && num1 < num3) 
    //     cout << num1 << " is Smallest." << endl;
    // else if  (num2 < num3)
    //     cout << num2 << " is Smallest." << endl;
    // else 
    //     cout << num3 << " is Smalleset." << endl;


// Another Way

// #include <iostream>
// using namespace std;

// int main () {
//     int num1, num2, num3;
//     cout << "Enter 3 Numbers: " << endl;
//     cin >> num1 >> num2 >> num3;
//     if (num1 > num2 && num1 > num3) {
//         if (num2 > num3) {
//             cout << num1 << " is Greatest." << endl;
//             cout << num3 << " is Smallest." << endl;
//         }
//         else {
//             cout << num1 << " is Greatest." << endl;
//             cout << num2 << " is Smallest." << endl;
//         }
//     }
//     else if (num2 > num1 && num2 > num3) {
//         if (num1 > num3){
//             cout << num2 << " is Greatest." << endl;
//             cout << num3 << " is Smallest." << endl;
//         }
//         else {
//             cout << num2 << " is Greatest." << endl;
//             cout << num1 << " is Smallest." << endl;
//         }
//     }
//     else {
//         if (num1 > num2) {
//             cout << num3 << " is Greatest." << endl;
//             cout << num2 << " is Smallest." << endl;
//         }
//         else {
//             cout << num3 << " is Greatest." << endl;
//             cout << num1 << " is Smallest." << endl;
//         }
//     }
//     return 0;
// }