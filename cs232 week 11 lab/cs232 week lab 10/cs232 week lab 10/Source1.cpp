#include <iostream>
#include "Star.h"

using namespace std;

int main() {
	//declarations
	int userInput;
	Star patrick;

	//get user input
	cout << "enter a number for the star: ";
	cin >> userInput;

	//output 
	patrick.setSide(userInput);
	patrick.displayStar();

	return 0;
}