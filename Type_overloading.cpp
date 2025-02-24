#include <iostream>
using namespace std;

class Time
{
private:
    int hours, minutes;

public:

    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    
    operator int() const
    {
        return hours * 60 + minutes;
    }

    
    void display()
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t1(2, 30);

    cout << "Time: ";
    t1.display();

    int totalMinutes = t1; 
    cout << "Total minutes: " << totalMinutes << endl;

    return 0;
}