#include <iostream>

using namespace std;

int main()
{
    string active = " ";
    string gender = " ";
    int weight = 0;
    cout << "Are you a male or are you a female (f/m)" << endl;
    cin >> gender;
    cout << "are you active? (y/n)";
    cin >> active;
    cout << "How much do you weigh";
    cin >> weight;
    if (gender == "f") {
        if (active == "y"){
            cout << "Calories per day is: " << weight * 12;
        }
        else {
            cout << "Calories per day is: " << weight * 10;
        }
    }
    else{
        if (active == "y") {
            cout << "Calories per day is: " << 15 * weight;
        }
        else {
            cout << "Calories per day is: " << 13 * weight;
        }

    }
    return 0;
}

