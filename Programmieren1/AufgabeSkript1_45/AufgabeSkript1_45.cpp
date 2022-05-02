/* Projekt: AufgabeSkript1_45 */

/* Aufgabe:

    Schreiben Sie eine C++-Funktion fk, welche n! (Fakult�t von n) berechnet:

    fk(n) = 1*2*3*...*n

    Schreiben Sie zu dieser Funktion ein Hauptprogramm, sodass folgendes am Bildschirm erscheint:

    fk(2) = 2
    fk(3) = 6
    fk(4) = 24
    fk(5) = 120
    fk(6) = 720

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
int fk(int);
int fkRec(int);
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche die Fakult�t des �bergebenen Parameters n berechnet.
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int fk(int n)
{
    int i = 1;

    while (n > 1)
    {
        i *= n;
        --n;
    }
    return(i);
}
/// <summary>
/// Funktion, welche die Fakult�t des �bergebenen Parameters n rekursiv berechnet.
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int fkRec(int n)
{
    if (n <= 0) return 1;
    else return(fkRec(n - 1) * n);
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main()
{
    int i = 2;

    while (i < (2+5)) //Anfangswert = 2; Durchg�nge = 5
    {
        std::cout << "fk(" << i << ") = \t" << fk(i);
        std::cout << std::endl;
        std::cout << "fkRec(" << i << ") = \t" << fkRec(i);
        std::cout << std::endl;
        ++i;
    }

    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion


