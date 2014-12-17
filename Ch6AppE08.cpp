//Ch6AppE08.cpp
//Displays the answer to arithmetic problems
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{	
	char letter;
	int num1;
	int num2;
	int ans;
	
	cout << "What type of math would you like: " << endl;
	cout << "(A - add, S - subtract, M - Multiply, D - Divisoin) ";
	cin >> letter;
	
	if(letter == 'A' || letter == 'S' || letter == 'M' || letter == 'D')
	{
		cout << "What numbers would you like to use:" << endl;
		cout << "num 1: ";
		cin >> num1;
		cout << "num 2: ";
		cin >> num2;
	}
	switch (letter)
	{
		case 'A':
			ans = num1 + num2;
			cout << ans << endl;
			break;
		case 'S':
			ans = num1 - num2;
			cout << ans << endl;
			break;
		case 'M':
			ans = num1 * num2;
			cout << ans << endl;
			break;
		case 'D':
			ans = num1 / num2;
			cout << ans << endl;
			break;
		default:
			cout << "Please leave. We do not take kindly to rebels." << endl;
			break;
	}
    return 0;
}   //end of main function