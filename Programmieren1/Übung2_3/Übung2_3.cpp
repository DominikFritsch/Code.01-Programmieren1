/* Projekt: Übung2_3 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches eine Zahl vom Benutzer einliest und feststellt,
    ob die Zahl gerade oder ungerade ist. Geben Sie eine entsprechende Meldung auf Konsole
    aus.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
bool evenOddNumber(int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int input;

    std::cout << "Eingabe Zahl: ";
    std::cin >> input;
    std::cout << std::endl;

    if (evenOddNumber(input) == true) std::cout << "Die eingegebene Zahl " << input << " ist gerade.";
    else std::cout << "Die eingegebene Zahl " << input << " ist ungerade.";

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITiON
/// <summary>
/// Funktion, welche überprüft ob die übergebene Zahl gerade oder ungerade ist.
/// </summary>
/// <param name="a"></param>
/// <returns> false=ungerade, true=gerade</returns>
bool evenOddNumber(int a)
{
    bool result = false;

    if (a % 2 == 0) result = true;

    return(result);
}
#pragma endregion





