#include <iostream>
#include <assert.h>
#include "studentsStack.h"

using namespace std; 

studentStack::studentStack()
{
	top = -1; 
}

bool studentStack::isEmpty() const
{
	return top < 0; 
}

void studentStack::push(const double& newGrade) 
{
	if (top < NUMOFGRADES-1) {
		top++; 
		grades[top] = newGrade; 
	}
}

double studentStack::pop()
{
	double poppedItem; 
	if (!isEmpty()) {
		poppedItem = grades[top];
		top--;
		return poppedItem;
	}
	else
		cout << "the list of grades is empty! "; 
	return -1; 
}

double studentStack::peek() const
{
	assert(!isEmpty());
	return grades[top];
}

double studentStack::getMin(int numOfScores) const {
	double minGrade = grades[0];
	for (int i = 0; i < numOfScores; i++) {
		if (grades[i] < minGrade) {
			minGrade = grades[i];
		}
	}
	return minGrade;
}


double studentStack::getMax(int numOfScores) const {
	double maxGrade = grades[top];
	for (int i = 0; i < numOfScores; i++) {
		if (grades[i] > maxGrade) {
			maxGrade = grades[i];
		}
	}
	return maxGrade;
}

double studentStack::sum() {
	double sum = 0;
	while (!isEmpty()) {
		double currentGrade = grades[top];  
		sum += currentGrade;               
		pop();                           
	}
	return sum;
}







