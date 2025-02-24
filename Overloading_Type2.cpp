#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructor to initialize hours and minutes
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    // Constructor to convert total minutes into Time object
    Time(double totalMinutes) {
        hours = static_cast<int>(totalMinutes) / 60;
        minutes = static_cast<int>(totalMinutes) % 60;
    }

    void display() const {
        std::cout << "Time: " << hours << " hours and " << minutes << " minutes" << std::endl;
    }
};

int main() {
    int totalMinutes = 130;
    Time t = totalMinutes; // Using the constructor to convert total minutes to Time object
    t.display();

    return 0;
}