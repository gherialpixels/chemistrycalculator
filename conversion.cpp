#include <iostream>
#include <string>

using namespace std;

// user inputs

int userConvert() // asks what the user wants to get from the conversion
{
    cout << "What would you like to convert to?\n1) grams\n2) dm3\n3) mol.dm-3\n(type the corresponding digit)\n";

    int answer;
    cin >> answer;

    while (answer < 0 && answer > 3)
    {
        cout << "Please enter a value between 1 and 3\n";

        cin >> answer;
    }

    return answer;
}

// asks what the user wants to convert from
int userConvertFrom(int convertToAnswer)
{
    int answer;

    if (convertToAnswer == 1)
    {
        cout << "What are you converting from?\n1) kg\n2) mg\n(type the number next to the unit)\n";
        cin >> answer;
    }

    if (convertToAnswer == 2)
    {
        cout << "What are you converting from?\n1) cm3\n2) litres\n(type the number next to the unit)\n";
        cin >> answer;
    }

    if (convertToAnswer == 3)
    {
        cout << "What are you converting from?\n1) g.cm-3\n2) g.dm-3\n(type the number next to the unit)\n";
        cin >> answer;
    }

    while (answer < 0 || answer > 2)
    {
        cout << "Please enter a value between 1 and 2\n";
        cin >> answer;
    }

    return answer;
}

// conversions

double convertToGrams(int convertFromAnswer, double mass)
{
    if (convertFromAnswer == 1)
    {
        double convertedAnswer = mass * 1000;
        return convertedAnswer;
    }

    if (convertFromAnswer == 2)
    {
        double convertedAnswer = mass / 1000;
        return convertedAnswer;
    }
}

double convertToDecimetersCubed(int convertFromAnswer, double volume)
{
    if (convertFromAnswer == 1)
    {
        double convertedVolume = volume / 1000;
        return convertedVolume;
    }

    if (convertFromAnswer == 2)
    {
        double convertedVolume = volume;
        return convertedVolume;
    }
}

double convertToMolPerDM (int convertFromAnswer, double conc, double molar_mass)
{
    if (convertFromAnswer == 1)
    {
        double convertedValue = (conc * (1 / molar_mass)) * 1000;

        return convertedValue;
    }

    if (convertFromAnswer == 2)
    {
        double convertedValue = conc * (1 / molar_mass);

        return convertedValue;
    }
}

