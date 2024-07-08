class Star
{
public:
	Star();
	Star(int sidePar);

	void setSide(int sidePar);
	int getSide();

	void drawStars(int numOfStars);
	void drawSpaces(int numOfSpaces);
	void displayStar();

private:
	int userInput;
	int spacesBefore;
	int spacesInside;

};

