// Create a class complex with real and imaginary part (integer). Implement
// default, parameterized and copy constructor to initialize the objects of
// complex class and display them.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 5;
        imag = 10;
    }
    // Parmetarized
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    // Copy
    Complex(Complex const &obj)
    {
        real = obj.real;
        imag = obj.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2(6, 9);
    Complex copy = Complex(12, 4);

    cout << "Complex Number 1 = ";
    c1.display();
    cout << "Complex Number 2 = ";
    c2.display();
    cout << "sum = ";
    copy.display();

    return 0;
}