// Q05. Create Complex Class with Real and Imaginary Data member. Display sum of 2 complex numbers

#include <iostream>
using namespace std;

class complex {
    public: 
        int real, imag;
    void getData () {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    //addition of real to real and imaginary to imaginary parts
    void add (complex num1, complex num2) {
        real = num1.real + num2.real;
        imag = num1.imag + num2.imag;
    }
    //for displaying final number
    void display () {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main () {
    complex num1, num2, sum_num;
    cout << "Enter 1st Complex Number:: " << endl;
    num1.getData ();
    cout << "1st Complex Number: ";
    num1.display (); 
    
    cout << "Enter 2nd Complex Number:: " << endl;
    num2.getData ();
    cout << "2nd Complex Number: ";
    num2.display (); 
    
    sum_num.add(num1, num2);
    cout << "Sum of Two Complex Numbers: ";
    sum_num.display ();
    return 0;
}