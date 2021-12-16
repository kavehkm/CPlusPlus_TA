#include <iostream>
#include <ctime>
using namespace std;


int main () {
    // seconds
    long int elapsedSeconds = time(0);
    int currentSeconds = elapsedSeconds % 60;
    // minutes
    long elapsedMinutes = elapsedSeconds / 60;
    int currentMinutes = elapsedMinutes % 60;
    // hours
    long elapsedHours = elapsedMinutes / 60;
    int currentHours = elapsedHours % 24;

    cout << "Current time: ";
    cout << currentHours << ":" << currentMinutes << ":" << currentSeconds;

    return 0;
}