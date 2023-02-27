// CPP01-HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void Print() {
    cout << "Wrong answer!!!\n";


};

namespace sex 
{
    void sexy() {
        cout << "you are hot.\n";
    }
}

char gender[5];
char male[100] = "male";
char female[100] = "female";

using namespace sex;

int main()
{
    cout << "Enter your Gender:";
    cin >> gender;
    if (strcmp(gender , male)==0)
        cout << "Get out of here!";
    else if (strcmp(gender, female) == 0)
        sexy();
    else
        Print();




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
