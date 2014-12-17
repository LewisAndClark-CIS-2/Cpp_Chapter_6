//Ch6ConE06.cpp
//Displays a message based on the number 
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{

	char gender = ' ';
	char active = ' ';
	double cal = 0;
	double weight = 0;
	
	cout << endl << "how much do you weigh? ";
	cin >> weight;
	
	cout << endl << "A - Moderately active" << endl << "I - inactive" << endl;
	cin >> active;
	
	cout << endl << "M - Male" << endl << "F - Female" << endl;
	cin >> gender;
	
	gender = toupper(gender);
	active =  toupper(active);
	
	switch (gender)
	{
		case 'M':
			switch (active)
			{
				case 'A':
					cal = weight * 12;
					break;
				case 'I':
					cal = weight * 10;
					break;
				
				default:
					cout << endl << "Incorrect input" << endl;
			}
			break;
	
		case 'F':
			switch (active)
				{
					case 'A':
						cal = weight * 15;
						break;
					case 'I':
						cal = weight * 13;
						break;
					
					default:
						cout << endl << "Incorrect input" << endl;
				}
			break;
		
		default:
			cout << endl << "Incorrect input" << endl;
	}
	cout << endl << cal << endl;
	return 0;
}
