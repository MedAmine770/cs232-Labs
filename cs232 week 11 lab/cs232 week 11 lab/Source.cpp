#include <iostream>
#include <cassert>
#include <cmath>
#include "studentsStack.h"

using namespace std;

//function to round
void grading(double percent); 
double roundToTenth(double numPar);

int main() {
    studentStack* stackPtr = new studentStack;
    double score;
    int numOfScores;

    cout << "How many scores are you going to enter: ";
    cin >> numOfScores;

    for (int i = 0; i < numOfScores; i++) {
        cout << "Enter score for quiz " << i + 1 << ": ";
        cin >> score;
        stackPtr->push(score);
    }

    double totalSum = stackPtr->sum();
    double percent = totalSum / numOfScores;
    double min = stackPtr->getMin(numOfScores);
    double max = stackPtr->getMax(numOfScores);

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Total Sum: " << totalSum << endl;
    cout << "Percent: " << roundToTenth(percent) << "%" << endl;
    grading(percent);
    cout << endl; 
    cout << "-----------------------------------------------";

    delete stackPtr;
    stackPtr = nullptr;

    return 0;
}

double roundToTenth(double numPar) {
    return std::round(numPar * 10.0) / 10.0; 
}

void grading(double percent) {
    if (percent >= 90)
    {
        cout << "Grade: A";
    }
    else if (percent >= 80)
    {
        cout << "Grade: B";
    }
    else if (percent >= 70)
    {
        cout << "Grade: C";
    }
    else if (percent >= 60)
    {
        cout << "Grade: D";
    }
    else {
        cout << "Grade: F";
    }
}