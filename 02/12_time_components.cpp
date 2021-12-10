#include <iostream>
using namespace std;


int main () {
    unsigned int duration, hours, minutes, seconds;

    cout << "Enter duration(in seconds): ";
    cin >> duration;

    hours = duration / 3600;
    minutes = (duration - hours * 3600) / 60;
    seconds = duration - hours * 3600 - minutes * 60;

    cout << "Duration is " << duration << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}