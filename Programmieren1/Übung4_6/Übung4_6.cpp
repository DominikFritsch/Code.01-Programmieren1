/* Projekt: Übung4_6 */

/* Aufgabe:

    Schreiben Sie eine C++ Funktion compare(), welche zwei Parameter erwartet. Die Aufrufparameter
    sollen als Ganzzahlen interpretiert und verglichen werden. Der Rückgabewert der Funktion sei:

        −1, falls Parameter 1 kleiner als Parameter 2 ist
        0, falls Parameter 1 und Parameter 2 gleich sind
        +1, falls Parameter 1 größer als Parameter 2 ist

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
int compare(int, int);
#pragma endregion


int main(void)
{
    std::cout << "Parameter1 = 3 | Parameter2 = 4 | Ergebnis = " << compare(3, 4);
    std::cout << std::endl;
    std::cout << "Parameter1 = 4 | Parameter2 = 3 | Ergebnis = " << compare(4, 3);
    std::cout << std::endl;
    std::cout << "Parameter1 = 2 | Parameter2 = 2 | Ergebnis = " << compare(2, 2);
    std::cout << std::endl;

    std::system("pause");
    return(0);
}

#pragma region DEFINITION
int compare(int par1, int par2)
{
    if (par1 < par2)
        return(-1);
    if (par1 > par2)
        return(+1);

    return(0);
}
#pragma endregion
