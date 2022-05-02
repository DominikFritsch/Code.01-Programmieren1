/* Projekt AufgabeSkript1_101 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches eine positive, ganze Zahl von der Tastatur einliest und am Bildschirm
    ausgibt, ob die Zahl durch 3 ohne Rest teilbar ist.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int input;

    std::cout << "Eingabe positive, ganze Zahl: ";
    std::cin >> input;

    if (input % 3 == 0) std::cout << input << " ist durch 3 ohne Rest teilbar.";
    else std::cout << input << " ist nicht durch 3 ohne Rest teilbar.";

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion