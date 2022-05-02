/* Projekt: Übung3_3 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches eine positive long Zahl von der Tastatur einliest
    und die Anzahl der ungeraden Ziffern am Bildschirm ausgibt. Falls die eingegebene Zahl
    nicht positiv ist, soll das Programm mit dem Bildschirmtext Wrong input! enden.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    long input;
    int counter = 0;

    std::cout << "Eingabe positive Ganzzahl: ";
    std::cin >> input;

    std::cout << std::endl;

    if (input > 0)
    {
        while (input != 0)
        {
            //if ((input % 10) % 2 == 1) ++counter;
            counter += (input % 10) % 2;
            input /= 10;
        }
    }
    else std::cout << "Falsche Eingabe!";

    std::cout << "Anzahl: " << counter;

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

