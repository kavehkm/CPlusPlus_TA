#include <iostream>
using namespace std;


int getScore();
char findGrade(int score);
void printResult(int score, char grade);


int main () {
    int score = getScore();
    printResult(score, findGrade(score));
    return 0;
}


int getScore () {
    int score;
    do
    {
        cout << "Please enter grade: " << endl;
        cin >> score;
    } while (score < 0 || score > 100);
    return score;
}


char findGrade (int score) {
    char grade;

    if (score >= 90) {
        grade = 'A';
    }
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    return grade;
}


void printResult (int score, char grade) {
    cout << "Your score is: " << score << endl;
    cout << "Your Grade is: " << grade << endl;
}
