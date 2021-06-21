//Q03. Write function Area for calculating area of Cicle, Square, Rectangle, Triangle using Function Overloading

#include <iostream>
using namespace std;
//Circle
float Area (float r) {
    return (3.14 * r * r);
}
//Square
int Area (int s) {
    return (s * s);
}
//Rectangle
int Area (int w, int l) {
    return (w * l);
}
//Triangle
float Area (float h, float b) {
    return (h * b)/ 2;
}

int main () {
    float r, h, b;
    int s, w, l;
    cout << "Enter radius of Circle [decimal value]: ";
    cin >> r;
    cout << "Area of Circle is: " << Area (r) << endl;

    cout << "Enter side of Square [integer value]: ";
    cin >> s;
    cout << "Area of Square is: " << Area (s) << endl;

    cout << "Enter length and width of Rectangle [integer value]: ";
    cin >> w >> l;
    cout << "Area of Rectangle is: " << Area (w, l) << endl;

    cout << "Enter height and base of Triangle [decimal value]: ";
    cin >> h >> b;
    cout << "Area of Triangle is: " << Area (h, b) << endl;
    return 0;
}
