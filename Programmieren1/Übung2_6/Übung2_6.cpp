/* Projekt: Übung2_6 */

/* Aufgabe:

    Implementieren Sie in C++ ein Äquivalent zur while Schleife unter Verwendung von goto
    und Labels. Verwenden Sie ihr Programm um in Dreierschritten von 0 bis 99 zu zählen.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void outputWithGoTo(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    outputWithGoTo();

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche die Zahlen von 0 bis 99 in Dreierschritten ausgibt.
/// </summary>
/// <param name=""></param>
void outputWithGoTo(void)
{
    int i=0;

loop:

    if (i <= 99)
    {
        std::cout << i;
        std::cout << std::endl;
        i += 3;
        goto loop;
    }
}
#pragma endregion
