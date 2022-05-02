/* Projekt: Übung2_2 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches eine positive, ganze Zahl von der Tastatur
    einliest und am Bildschirm ausgibt, ob die Zahl durch 3 ohne Rest teilbar ist.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
bool divisibleBy3WithoutRest(unsigned int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    unsigned int input;

    std::cout << "Eingabe positive Ganzzahl: ";
    std::cin >> input;

    if (divisibleBy3WithoutRest(input)) std::cout << "Die eingegebene Zahl " << input << " ist durch 3 ohne Rest teilbar.";
    else std::cout << "Die eingegebene Zahl " << input << " ist nicht durch 3 ohne Rest teilbar.";

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche überprüft ob die übergebene positive Ganzzahl durch 3 ohne Rest teilbar ist.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
bool divisibleBy3WithoutRest(unsigned int a)
{
    bool result = false;

    unsigned int tempResult = a % 3;

    if ((a%3) == 0) result = true;
    else result = false;

    return result;
}
#pragma endregion



