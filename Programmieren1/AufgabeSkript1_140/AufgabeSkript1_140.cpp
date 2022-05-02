/* Projekt: AufgabeSkript1_140 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches eine Variable innerhalb eines eigenen
    Namenraums definiert und diese Variable anschlieﬂend in der main-Funktion
    ausgibt.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region NAMESPACES
namespace myNamespace
{
    int wert = 10;
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "Der definierte Wert ist: " << myNamespace::wert;

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion
