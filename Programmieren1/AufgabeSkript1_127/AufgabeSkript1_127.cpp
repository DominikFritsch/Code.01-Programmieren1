/* Projekt: AufgabeSkript1_127 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches von der Tastatur eine beliebig
    lange Folge von Dezimalziffern (0...9) als char-Zeichen einliest. Das
    letzte eingelesene Zeichen sei kein Zeichen, das eine Dezimalziffer darstellt.
    Dann soll die Quersumme (d.h. die Summe aller Ziffern) für die eingelesene
    Zahl am Bildschirm ausgegeben werden.

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
    char input;
    long sum = 0;

    std::cout << "Eingabe Dezimalziffer: ";
    std::cin >> input;


    while ((int)input >= 48 && (int)input <= 57)
    {
        sum += (int)input - 48;

        std::cout << "Eingabe Dezimalziffer: ";
        std::cin >> input;
    }

    std::cout << "Quersumme: " << sum << std::endl;

}
#pragma endregion
