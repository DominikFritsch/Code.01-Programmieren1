/* Projekt: AufgabeSkript1_27 */

/* Aufgabe:

    Erstellen Sie ein C++-Programm, welches das Volumen einer Kugel innerhalb einer Funktion berechnet.
    Der Radius soll vom Benutzer eingegeben werden können.

    V_K = (4/3) * PI * r^3

*/

#pragma region HEADER-DATEIEN
#include <iostream>
#include <cstdlib>
#include <math.h>
#pragma endregion

#pragma region MAKROS
#define PI 3.14
#pragma endregion

#pragma region DEKLARATION FUNKTIONEN
double calculateVolumeSphere(double);
#pragma endregion

#pragma region DEFINITION FUNKTIONEN
/// <summary>
/// Funktion zur Berechnung des Kugelvolumens.
/// </summary>
/// <param name="radius"></param>
/// <returns></returns>
double calculateVolumeSphere(double radius)
{
    //return((4.0 / 3.0) * PI * radius *radius *radius);
    return((4.0 / 3.0) * PI * std::pow(radius, 3));
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    double radius;

    std::cout << "Eingabe Radius: ";
    std::cin >> radius;
    std::cout << std::endl;
    std::cout << "V_K = (4/3) * PI * r^3 = " << "(4/3) * " << PI << " * " << radius << " = " << calculateVolumeSphere(radius);
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion
