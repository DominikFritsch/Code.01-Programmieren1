/* Projekt: AufgabeSkript1_130 */

/* Aufgabe:

    Die Zahl PI lässt sich durch das folgende Produkt berechnen:

        PI = 2 *((2/1) * (2/3) * (4/3) * (4/5) * (6/5) * (6/7) * ... (Wallissches Produkt)

    Entwickeln Sie ein C++-Programm, das die Zahl PI nach dieser Vorschrift berechnet.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void approximatePIWallis(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    approximatePIWallis();
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
void approximatePIWallis()
{
    double pi = 1.0;
    double currentFactor;
    int i = 1;

    do
    {
        currentFactor = (double)((2 * i) * (2 * i)) / (double)((2 * i - 1) * (2 * i + 1));

        pi *= currentFactor;
        ++i;

        std::cout << "i = " << i << "\t| Aktueller Faktor = " << currentFactor;
        std::cout << std::endl;

    } while (std::fabs(1 - currentFactor) > 0.0001);

    std::cout << std::endl;
    std::cout << "PI = " << pi * 2.0;
    std::cout << std::endl;
}
#pragma endregion