//Ch6AppE03.cpp
//Displays a shipping charge based on a state code
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	int code;
	cout << "Please enter a state code: ";
	cin >> code;
	switch(code)
	{
		case 1:
			cout << "25";
			break;
		case 2:
			cout << "30";
			break;
		case 3:
			cout << "40";
			break;
		case 4:
			cout << "40";
			break;
		case 5:
			cout << "30";
			break;
		case 6:
			cout << "30";
			break;
		default:
			cout << "Incorrect state code";
			break;
	}
	cout << endl;
    return 0;
}   //end of main function