// cplusplusTipCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//include
#include <iostream>

//namespace
using namespace std;

//variables
const int tipPercentageAddModifier = 1;
float billAmount;
int tip;

//declared methods
void prompt();
void calculateBill();

int main()
{
    cout << "Tip Calculator." << endl;
    prompt();
    return 0;
}

void prompt()
{
    cout << "How much is the bill?: $";
    cin >> billAmount;
    cout << "What % do you want to tip? (Enter whole number only): ";
    cin >> tip;
    calculateBill();
    return;
}

void calculateBill()
{
    float tip_int2float = tip; //IDE says we might lose data, but not in this case. We're only casting a whole number int into a whole number float.
    float tipPercentage = tip_int2float / 100;
    float finalPrice = billAmount * ( tipPercentageAddModifier + tipPercentage);
    cout << "The final amount would be: $" << finalPrice << endl;
    string garbageUserInput; //Probably not an ideal way to do this, but this is so the program doesnt close immediately after it tells you the finalPrice.
    cin >> garbageUserInput;
    return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
