//Q06. Create Time Class with Hour Minute and Second Data Member . Perform addition of 2 Times and store in another Class

#include <iostream> 
using namespace std;

class Time {
    private:
        int hour, minute, second; 
    public:
        void getTime () {
            cout << "Enter Time [Hr Min Sec]:: ";
            cin >> hour >> minute >> second;
        }
        void showTime () {
            cout << hour << ":" << minute << ":" << second << endl;
        }
        //normalize the hr, min, sec
        void conversion () {
            minute += second / 60;
            second = second % 60;
            hour += minute / 60;
            minute = minute % 60;
        }
        
        Time add (Time t) {
            Time temp;
            temp.second = second + t.second;
            temp.minute = minute + t.minute;
            temp.hour = hour + t.hour;
            //normalized the sum of times
            temp.conversion (); 
            return temp;
        }
    
};


int main () {
    Time t1, t2, t3;
    t1.getTime ();
    t2.getTime ();
    //assigned the normalized sum of times value of temp object to t3 object
    t3 = t1.add (t2);
    
    cout << "Sum of two times is:: ";
    t3.showTime ();
    cout << endl;
    return 0;
}
