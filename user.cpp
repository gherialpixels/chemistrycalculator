#include <iostream>
#include <string>
#include "calculations.h"
#include "conversion.h"

using namespace std;

// declarations
string userAnswerFirst();
double determineAnswer(string answer);
/*
 global variables
 what the user wants to convert to
 these variables are not initialised due to them
 having to ask for their values when the program
 starts
 */
string userCalculateAnswer;
int userConvertAnswer;

string retriever() // convert or calculate
{
    cout << "Would you like to convert or calculate?\n";

    string answer;
    cin >> answer;

    while (answer != "convert" && answer != "calculate")
    {
        cout << "Please enter either convert or calculate\n";
        cin >> answer;
    }

    return answer;
}

// converting sector
double evaluateConvert() //decides how the 'converter' would get its value
{
    userConvertAnswer = userConvert();
    int answerConFrom = userConvertFrom(userConvertAnswer);

    if (userConvertAnswer == 1)
    {
        if (answerConFrom == 1)
        {
            double finalValue = convertToGrams(answerConFrom, getMass_1());
            return finalValue;
        }

        if (answerConFrom == 2)
        {
            double finalValue = convertToGrams(answerConFrom, getMass_2());
            return finalValue;
        }
    }

    if (userConvertAnswer == 2)
    {
        if (answerConFrom == 1)
        {
            double finalValue = convertToDecimetersCubed(answerConFrom, getVolume_1());
            return finalValue;
        }

        if (answerConFrom == 2)
        {
            double finalValue = convertToDecimetersCubed(answerConFrom, getVolume_2());
            return finalValue;
        }
    }

    if (userConvertAnswer == 3)
    {
        if (answerConFrom == 1)
        {
            double finalValue = convertToMolPerDM(answerConFrom, getConc_1(), getMolarNumber());
            return finalValue;
        }

        if (answerConFrom == 2)
        {
            double finalValue = convertToMolPerDM(answerConFrom, getConc_2(), getMolarNumber());
            return finalValue;
        }
    }
}

// calculating sector

string userAnswerFirst() // this is what the user would like to find when calculating
{
    cout << "What would you like to find?\n";

    string answer;
    cin >> answer;

    return answer;
}

double evaluateCalculate()
{
    userCalculateAnswer = userAnswerFirst();

    double finalValue = determineAnswer(userCalculateAnswer);

    return finalValue;
}

// determines what the user wishes to calculate
double determineAnswer(string answer)
{
    double finalValue;

    if (answer == "mole")
    {
        cout << "What way would you like to find the moles:\n" <<
        "1) the concentration and volume\n2) the no. of particles\n" <<
        "3) the mass and the molar number\n";

        int int_answer;
        cin >> int_answer;

        while (int_answer <= 0 && int_answer >= 4)
        {
            cout << "enter a value between 1 and 3\n";
            cin >> int_answer;
        }

        if (int_answer < 4 && int_answer > 0)
        {
            switch (int_answer)
            {
            case 1:
                finalValue = calculateMol_1(getVolume(), getConc());
                return finalValue;
                break;
            case 2:
                finalValue = calculateMol_2(getNoOfParticles());
                return finalValue;
                break;
            case 3:
                finalValue = calculateMol_3(getMass(), getMolarNumber());
                return finalValue;
                break;
            default:
                break;
            }
        }

    }

    else if (answer == "concentration")
    {
        finalValue = calculateConc(getMole(), getVolume());

        return finalValue;
    }

    else if (answer == "numberofparticles") // this works, along with the molar mass one, but the word must have no spaces
    {
        finalValue = calculateNoOfParticles(getMole());

        return finalValue;
    }

    else if (answer == "mass")
    {
        finalValue = calculateMass(getMole(), getMolarNumber());

        return finalValue;
    }

    else if (answer == "molarmass")
    {
        finalValue = calculateMR(getMole(), getMass());

        return finalValue;
    }

    else
    {
        return 69.9; // this value shows whether there has been a bug or not
    }
}
