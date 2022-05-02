/* Projekt: AufgabeSkript1_28 */

/* Aufgabe:

    Erstellen Sie ein C++-Programm, welches das Volumen eines Würfels innerhalb einer Funktion berechnet.
    Die Kantenlänge soll vom Benutzer eingegeben werden können.

    Das Ergebnis soll in der Form "Das Volumen ist: ..." ausgegeben werden.

*/

#pragma region HEADER-DATEIEN
#include <iostream>
#include <cstdlib>
#include <math.h>
#pragma endregion

#pragma region DEKLARATION FUNKTIONEN
double calculateVolumeCube(double);
#pragma endregion

#pragma region DEFINITION FUNKTIONEN
/// <summary>
/// Funktion zur Berechnung des Volumens eines Würfels.
/// </summary>
/// <param name="edgeLength"></param>
/// <returns></returns>
double calculateVolumeCube(double edgeLength)
{
    return(std::pow(edgeLength, 3));
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    double edgeLength;

    std::cout << "Eingabe Kantenl\x84nge: ";
    std::cin >> edgeLength;
    std::cout << std::endl;
    std::cout << "Das Volumen ist: " << calculateVolumeCube(edgeLength);
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion
