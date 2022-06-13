//Create a class Distance with foot and inch. Getinput from keyboard and Display the data

#include <iostream>
using namespace std;

class Distance {
    public:
        float foot, inch;
        void getInput () {
            cout << "Enter foot: ";
            cin >> foot;
            cout << "Enter inch: ";
            cin >> inch;
        }
        void Display () {
            cout << "Measure in foot: " << foot << endl;
            cout << "Measure in inch: " << inch << endl;
        }
};

int main () {
    Distance ftin;
    ftin.getInput ();
    ftin.Display ();
    return 0;
}