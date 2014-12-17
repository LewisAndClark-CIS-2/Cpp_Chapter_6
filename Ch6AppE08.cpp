//Ch6AppE08.cpp
//Displays the answer to arithmetic problems
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	double num1 = 0;
	double num2 = 0;
	double solution = 0;
	char choice = ' ';
	
	cout << endl << "A - Addition" << endl << "S - Subtraction" << endl << "M - multiplication" << endl << "D - Division" << endl;
	cout << "Which one would you like to do?" << endl;
	cin >> choice;
	choice = toupper(choice);
	switch (choice)
		{
			case 'A':
				cout << "Please enter a number" << endl;
				cin >> num1;
				cout << "Please enter another number" << endl;
				cin >> num2;
				solution = num1 + num2;
				cout << "Your solution is " << solution << endl;
				break;
			
			case 'S':
				cout << "Please enter a number" << endl;
				cin >> num1;
				cout << "Please enter another number" << endl;
				cin >> num2;
				if (num1 >= num2)
				{
					solution = num1 - num2;
				}
				else
				{
					solution = num2 - num1;
				}
				cout << "Your solution is " << solution << endl;
				break;
				
			case 'M':
				cout << "Please enter a number" << endl;
				cin >> num1;
				cout << "Please enter another number" << endl;
				cin >> num2;
				solution = num1 * num2;
				cout << "Your solution is " << solution << endl;
				break; 
			
			case 'D':
				cout << "Please enter a number" << endl;
				cin >> num1;
				cout << "Please enter another number" << endl;
				cin >> num2;
				if (num1 >= num2)
				{
					solution = num1 / num2;
				}
				else
				{
					solution = num2 / num1;
				}
				cout << "Your solution is " << solution << endl;
				break;
				
			default:
				cout << endl << "Incorrect input" << endl;
		}
		
		
	return 0;
}