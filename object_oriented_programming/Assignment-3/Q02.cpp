// Create a class complex as above. Now add, subtract and multiply on two
// objects of complex type
// i) using objects as function argument,
// ii) returning object from function.

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Addition
    Complex add(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    // Substraction
    Complex subtract(Complex const &obj)
    {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    // Multiplication
    Complex multiply(Complex const &obj)
    {
        Complex res;
        res.real = (real * obj.real) - (imag * obj.imag);
        res.imag = (real * obj.imag) + (imag * obj.real);
        return res;
    }

    void getdata()
    {
        cout << "Enter real part and imaginary part: " << endl;
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, sum, diff, product;

    c1.getdata();
    cout << "Complex Number 1 = ";
    c1.display();
    c2.getdata();
    cout << "Complex Number 2 = ";
    c2.display();

    cout << "sum = ";
    sum = c1.add(c2);
    sum.display();
    cout << "diff = ";
    diff = c1.subtract(c2);
    diff.display();
    cout << "product = ";
    product = c1.multiply(c2);
    product.display();

    return 0;
}