//Ch6ConE03.cpp
//Displays a message based on the number 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{

	int state = 0;
	int charge = 0;
	cout << "What state code are you shipping to?";
	cin >> state;
	switch (state)
	{
		case 1:
			charge = 25;
			break;
		case 2:
			charge = 30;
			break;
		case 3:
			charge = 40;
			break;
		case 4:
			charge = 40;
			break;
		case 5:
			charge = 30;
			break;
		case 6:
			charge = 30;
			break;
		default:
			cout << endl << "Incorrect state code" << endl;
	}
	cout << charge << endl;
	return 0;
}
