/* Projekt: AufgabeSkript1_124 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches eine positive long-Zahl von der
    Tastatur einliest und die Quersumme am Bildschirm ausgibt. Falls die
    eingegebene Zahl nicht-positiv ist, soll das Programm mit dem Bildschirmtext
    <Falsche Eingabe!> enden.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void calculateCrossSum(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    calculateCrossSum();
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
void calculateCrossSum(void)
{
    long input;
    long sum = 0;

    std::cout << "Eingabe positive Ganzzahl: ";
    std::cin >> input;

    std::cout << std::endl;

    if (input > 0)
    {
        while (input != 0)
        {
            sum += (input % 10);
            input /= 10;
        }

        std::cout << "Quersumme: " << sum;
    }
    else std::cout << "Falsche Eingabe!";

    std::cout << std::endl;
}
#pragma endregion

