/* Projekt: AufgabeSkript1_126 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches eine positive long-Zahl von der
    Tastatur einliest und die Anzahl der ungeraden Ziffern am Bildschirm ausgibt.
    Falls die eingegebene Zahl nicht-positiv ist, soll das Programm mit dem
    Bildschirmtext <Falsche Eingabe!> enden.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void numberOfOddDigits(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    numberOfOddDigits();
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
void numberOfOddDigits(void)
{
    long input;
    int counterOddDigits = 0;

    std::cout << "Eingabe positive Ganzzahl: ";
    std::cin >> input;

    std::cout << std::endl;

    if (input > 0)
    {
        while (input != 0)
        {
            if ((input % 10) % 2 != 0)
                counterOddDigits++;

            input /= 10;
        }

        std::cout << "Anzahl der ungeraden Ziffern: " << counterOddDigits;
    }
    else std::cout << "Falsche Eingabe!";

    std::cout << std::endl;
}
#pragma endregion