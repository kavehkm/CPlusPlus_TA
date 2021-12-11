#include <iostream>
using namespace std;


int main () {
    int counter = 0;
    int score;
    int sum = 0;
    double average;

    while (counter < 4) {
        cout << "Enter score" << counter + 1 << " : ";
        cin >> score;
        sum += score;
        // update counter
        counter++;
    }
    // calculate average
    average = static_cast <double> (sum) / 4;

    cout << "Sum of score is: " << sum << endl;
    cout << "Average of score is: " << average;

    return 0;
}