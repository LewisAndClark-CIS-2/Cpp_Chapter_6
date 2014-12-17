//Ch6AppE06.cpp
//Displays the number of daily calories 
//needed to maintain your current weight
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	int weight;
	char gender;
	char activity;
	int cal;
	
	cout << "What gender are you? (M - male, F - Female) ";
	cin >> gender;
	
	cout << "How active are you? (I - inactive, A - active) ";
	cin >> activity;
	
	cout << "How much do you weigh? ";
	cin >> weight;
		
	switch(gender)
	{
		case 'M':
			switch(activity)
			{
				case 'I':
					cal = weight * 13;
					break;
				case 'A':
					cal = weight * 15;
					break;
				default:
					cout << "Invalid response" << endl;
			}
			break;
			
		case 'F':
			switch(activity)
			{
				case 'I':
					cal = weight * 10;
					break;
				case 'A':
					cal = weight * 12;
					break;
				default:
					cout << "Invalid response" << endl;
			}
			break;
		
		default:
			break;
	}
    cout << "You need " << cal << " Calories" << endl;
	return 0;
}   //end of main function