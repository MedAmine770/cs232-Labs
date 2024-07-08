#include <iostream>
#include <string>

using namespace std; 

int const ARRAYSIZE = 12;

struct nameNode
{
	string name; 
	nameNode* link;
};

int main () {
	//declarations 
	srand(time(0));
	string positionAssigned;
	string positionsArr[ARRAYSIZE] = { "P", "c","1B","2B","3B","SS","LF","LCF","RCF","RF","O1","02"};
	int parallelArr[ARRAYSIZE] = {0,0,0,0,0,0,0,0,0,0,0,0};

	//declarations nodes part
	int numOfNames = 11; 
	nameNode* head = new nameNode; 
	head->link = nullptr; 
	nameNode* nextNode = head; 

	//get user input
	//creating 12 nodes
	nextNode = head;
	for (int i = 0; i < numOfNames; i++)
	{
		nextNode->link = new nameNode;
		nextNode = nextNode->link;
		nextNode->link = nullptr;
	}

	nextNode = head; 
	int cnt1 = 1;
	while (nextNode != nullptr)
	{
		cout << "enter player " << cnt1++ << " name: "; 
		cin >> nextNode->name; 
		nextNode = nextNode->link; 

	}

	//randomizing postionqs

	nextNode = head;
	int cnt = 0;
	cout << " Game lineup and field positions :"; 
	cout << "--------------------------------------";
	while (cnt < 12)
	{
		int randomIndex = rand() % 12;
		if (parallelArr[randomIndex] != 1)
		{
			cout << nextNode->name << "			" << positionsArr[randomIndex] << endl;
			parallelArr[randomIndex] = 1;
			nextNode = nextNode->link;
			cnt++;
		}
	};



	//Pitcher(P), Catcher(C), First Base(1B), Second Base(2B), Third Base(3B), Short Stop(SS), Left Field(LF) Left Center Field(LCF), Right Center Field(RCF), Right Field(RF).



}