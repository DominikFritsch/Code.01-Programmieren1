/* Projekt: Übung3_6 */

/* Aufgabe:

    Die Zahl PI lässt sich durch das Wallis-Produkt berechnen. Es wurde im Jahre 1655 von
    dem englischen Mathematiker John Wallis entdeckt.

    PI/2 = PRO_{i=1}^{inf} [\frac{(2i)*(2i)}{(2i-1)*(2i+1)}]

    Entwickeln Sie ein C++ Programm, das die Zahl PI nach dieser Vorschrift berechnet. Die
    Berechnung soll abgebrochen werden, falls die Abweichung des aktuellen Faktors von 1
    kleiner ist als 0,0001.

    --> Abweichung des aktuellen Faktors von 1 --> Prüfung std::fabs(1 - aktuellerFaktor)

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cmath>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
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

    } while (std::fabs(1-currentFactor) > 0.0001);
    
    std::cout << std::endl;
    std::cout << "PI = " << pi * 2.0;
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion