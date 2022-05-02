/* Projekt: AufgabeSkript1_53 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches folgende Funktionen implementiert:

    - Funktion 1: Umwandlung einer Binärzahl in eine Dezimalzahl
    - Funktion 2: Umwandlung einer Dezimalzahl in eine Binärzahl
    - Funktion 3: Bestimmung des min. und max. Wertebereichs des Datentyps short

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <limits>
#pragma endregion

#pragma region DEKLARATION
void binToDec(std::string);
void decToBin(int);
void minMaxValueOfShort(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::string binaryNumber = "10101010110010";
    int decimalNumber = 10930;

    binToDec(binaryNumber);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "---------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    decToBin(decimalNumber);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "---------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    minMaxValueOfShort();
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche eine übergebene Binärzahl in eine Dezimalzahl umwandelt.
/// </summary>
/// <param name="binaryNumber"></param>
void binToDec(std::string binaryNumber)
{
    int sum = 0;
    //std::cout << binaryNumber.length();
    //std::cout << std::endl;

    for(int i = 0 ; i < binaryNumber.length(); i++)
    {
        if (binaryNumber[i] == '1') sum += (1 * std::pow(2, binaryNumber.length() - 1 - i));
    }

    std::cout << "Bin\x84rzahl: " << binaryNumber << " | " << "Dezimalzahl: " << sum;
}
/// <summary>
/// Funktion, welche eine übergebene Dezimalzahl in eine Binärzahl umwandelt.
/// </summary>
/// <param name="decimalNumber"></param>
void decToBin(int decimalNumber)
{
    std::string binaryNumber;
    std::string binaryNumberReversed;

    int startDecimalNumber = decimalNumber;
    int rest;

    while (decimalNumber >= 1)
    {
        rest = decimalNumber % 2;
        rest += 48;
        decimalNumber /= 2;
        binaryNumber += (char)rest;
    }
   
    for (int i = 0; i < binaryNumber.length(); i++)
    {
        binaryNumberReversed += binaryNumber[binaryNumber.length() - 1 - i];
    }

    std::cout << "Bin\x84rzahl: " << binaryNumberReversed << " | " << "Dezimalzahl: " << startDecimalNumber;
}
/// <summary>
/// Funktion, welche den min. und max. Wertebereich des Datentyps short bestimmt.
/// </summary>
/// <param name=""></param>
void minMaxValueOfShort(void)
{
    short minValue = 0;
    short maxValue = 0;

    while (minValue >= 0)
    {
        ++minValue;
    }

    maxValue = minValue - 1;
    
    std::cout << "Tats\x84 \bchlich: " << std::numeric_limits<short>::min() << "\t|\t" << "Berechnet: " << minValue;
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << std::numeric_limits<short>::max() << "\t|\t" << "Berechnet: " << maxValue;

}
#pragma endregion
