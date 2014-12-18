#include <iostream>

using namespace std;

int main()
{
    string choice = " ";
    int num1 = 0;
    int num2 = 0;

    cout << "What would you like to do" << endl;
    cout << "a - addition" << endl;
    cout << "s - subtraction" << endl;
    cout << "m - multiplication" << endl;
    cout << "d - Division\n" << endl;

    cin >> choice;

    cout << "What is your first number: ";
    cin >> num1;
    cout << "What is your second number: ";
    cin >> num2;

    if (choice == "a") {
        cout << num1 + num2;

    }
    else if (choice == "m") {
        cout << num1 * num2;
    }
    else if (choice == "s") {
        if (num1 > num2) {
            cout << num1 - num2;
            }
        else {
            cout << num2 - num1;
            }

    }
    else if (choice == "d") {
        if (num1 > num2) {
            cout << num1 / num2;
                }
        else {
             cout << num2 / num1 << endl;
             }

    }
     else {
            cout << "sorry recheck yoursyntax" << endl;
        }


}

