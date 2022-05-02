/* Projekt: Übung3_1 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches beliebig viele float Zahlen von der Tastatur
    einliest, bis eine Zahl kleiner als 0 eingegeben wird. Es soll dann die Zahl am Bildschirm
    ausgegeben werden, die am größten ist. Sie können davon ausgehen, dass die erste eingelesene
    Zahl größer als 0 ist.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    float input;
    float maxInput = -1.0f;

    do
    {
        std::cout << "Eingabe positive Zahl: ";
        std::cin >> input;

        if (input > maxInput) maxInput = input;

    } while (input > 0.0f);

    std::cout << std::endl;
    if (maxInput > 0.0f) std::cout << "Gr\x94\xE1te eingegebene Zahl war " << maxInput << ".";
    else std::cout << "Es wurde keine positive Zahl eingegeben.";
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion