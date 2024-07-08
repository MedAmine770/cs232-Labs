#include <iostream>
#include "Star.h"

using namespace std;

Star::Star()
{
	spacesBefore = 0;
	spacesInside =0;
	userInput = 0;

}

Star::Star(int sidePar)
{
	if (sidePar > 0)
		userInput = sidePar;
	else
		userInput = 0;

}

void Star::setSide(int sidePar)
{
	if (sidePar > 0)
		userInput = sidePar;
	else
		userInput = 0;
}


int Star::getSide()
{

	return userInput;
}


void Star::drawStars(int numOfStars)
{
	for (int i = 0; i < numOfStars; i++)
	{
		cout << "*";
	}
}

void Star::drawSpaces(int numOfSpaces)
{
	for (int i = 0; i < numOfSpaces; i++)
	{
		cout << " ";
	}
}


void Star::displayStar()
{
	//part1
	spacesInside = 0; 
	spacesBefore = (userInput * 2) - 2;
	drawSpaces(spacesBefore);
	drawStars(1);
	cout << endl; 
	spacesBefore--;
	for (int i = 0; i < userInput-2; i++)
	{
		drawSpaces(spacesBefore);
		drawStars(1); 
		drawSpaces(spacesInside); 
		drawStars(1);
		spacesInside += 2;
		spacesBefore--;
		cout << endl;

	}

	//part2 
	spacesInside = (userInput * 2) - 4;
	drawStars(userInput);
	drawSpaces(spacesInside);
	drawStars(userInput);
	cout << endl;

	//part3
	spacesBefore = 1;
	spacesInside = (userInput * 4) - 7;
	for (int i = 0; i < userInput-2 ; i++)
	{
		drawSpaces(spacesBefore);
		drawStars(1);
		drawSpaces(spacesInside); 
		drawStars(1);
		spacesInside -= 2;
		cout << endl; 
		spacesBefore++;
	}

	//part4
	drawSpaces(spacesBefore);
	spacesInside = userInput - 2; 
	drawStars(1); 
	drawSpaces(spacesInside);
	drawStars(1);
	drawSpaces(spacesInside);
	drawStars(1);
	cout << endl;

	//part5
	spacesBefore =userInput- 2;
	spacesInside =userInput-2;
	int spacesRectangle = 1; 
	for (int i = 0; i < userInput - 2; i++)
	{
		drawSpaces(spacesBefore);
		drawStars(1);
		drawSpaces(spacesInside);
		drawStars(1);
		drawSpaces(spacesRectangle);
		drawStars(1);
		drawSpaces(spacesInside);
		drawStars(1);
		spacesRectangle+=2; 
		spacesBefore--;
		cout << endl;
	}
	
	//part6
	/*spacesRectangle +=2;*/
	spacesInside++;
	spacesInside = userInput;
	drawStars(userInput);
	drawSpaces(spacesRectangle);
	drawStars(userInput);
}