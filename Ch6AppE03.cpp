//Ch6AppE03.cpp
//Displays a shipping charge based on a state code
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int shippingCharge = 0;
    int stateCode = 0;
    cout << "Enter your state code" << endl;
    cin >> stateCode;

    switch (stateCode){
    case 1:
        shippingCharge = 25;
        break;
    case 2:
        shippingCharge = 30;
        break;
    case 3:
    case 4:
        shippingCharge = 40;
        break;
    case 5:
    case 6:
        shippingCharge = 30;
        break;
    }
    cout << "The shipping charge is " << shippingCharge << endl;

    return 0;
}   //end of main function
