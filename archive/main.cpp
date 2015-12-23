#include <iostream>
#include "user.h"
#include "conversion.h"
#include <string>

using namespace std;

double g_tempAnswer;

int main()
{
    cout << "Welcome to the Chemistry Calculator\n";

    string firstAnswer(retriever());

    if (firstAnswer == "convert")
    {
        ::g_tempAnswer = evaluateConvert();// the double colon says that g_tempAnswer should be referred to as a global var.
    }

    if (firstAnswer == "calculate")
    {
        ::g_tempAnswer = evaluateCalculate(); // this answer will later be set to the final value
    }

    double finalValue(::g_tempAnswer);

    // this final bit used to make answer make sense; to add some 'style'
    if (firstAnswer == "convert")
    {   // what the user wants to convert to
        extern int userConvertAnswer; // need to use this value, or else the program would ask the initial question again
        switch (userConvertAnswer)
        {
        case 1:
            cout << "The substance has a weight of: " << finalValue << " g\n";
            break;
        case 2:
            cout << "The volume of the solution is: " << finalValue << " dm3\n";
            break;
        case 3:
            cout << "The concentration of the compound in a solution is: " << finalValue << " mol.dm-3\n";
            break;
        default:
            cout << "blahblahdsdasagad i broke" << endl; // just in case ^^
            break;
        }
    }

    if (firstAnswer == "calculate")
    {
        extern string userCalculateAnswer; // same with this value
        if (userCalculateAnswer == "mass")
        {
            cout << "You have a final mass of: " << finalValue << " g\n";
        }

        else if (userCalculateAnswer ==  "volume")
        {
            cout << "The resulting volume is: " << finalValue << " dm3\n";
        }

        else if (userCalculateAnswer == "concentration")
        {
            cout << "The final concentration is: " << finalValue << " mol.dm-3\n";
        }

        else if (userCalculateAnswer == "molarmass")
        {
            cout << "The molar mass of the compound is: " << finalValue << " g.mol-1\n";
        }

        else if (userCalculateAnswer == "numberofparticles")
        {
            cout << "You have: " << finalValue << " particles\n";
        }

        else if (userCalculateAnswer == "mole")
        {
            cout << "You have: " << finalValue << " moles of the desired compound\n";
        }

        else
        {
            cout << "blablbabbhiahbioihfas i broke" << endl;
        }
    }

    return 0;
}
