/* Projekt: AufgabeSkript1_114 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches folgende Zahlenfolge am Bildschirm ausgibt:
        0.00000
        0.15000
        0.30000
        0.45000
        0.60000
        0.75000
        0.90000
        1.05000
        1.20000
        1.35000
        1.50000

    Tipp zur richtigen Einstellung des Zahlenformats:

        cout.precision(5); /* Lege die Anzahl der Stellen fest, hier 5. 
        cout << fixed;

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << std::fixed;
    std::cout.precision(5);

    for (int i = 0; i <= 10; i++)
    {
        std::cout << "Wert: " << i * 0.15;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "----------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    for (float i = 0.0f; i <= 1.5f; i+=0.15f)
    {
        std::cout << "Wert: " << i;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "----------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion