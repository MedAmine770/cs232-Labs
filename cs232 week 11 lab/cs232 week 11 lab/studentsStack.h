#ifndef _STUDENT_STACK
#define _STUDENT_STACK

using namespace std; 

const int NUMOFGRADES = 100; 

class studentStack
{
private:
	int top; 
	double grades[NUMOFGRADES]; 

public:
	//default constructor
	studentStack();

	//tools
	bool isEmpty() const; 
	void push(const double& newGrade); 
	double pop(); 
	double peek() const; 

	//function prototypes
	double getMax(int numOfScores)const ; 
	double getMin(int numOfScores) const;
	double sum();
};

#endif _STUDENT_STACK