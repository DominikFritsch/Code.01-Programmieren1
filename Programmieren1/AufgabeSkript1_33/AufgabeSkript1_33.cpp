/* Projekt: AufgabeSkript1_33 */

/* Aufgabe:

    Es soll eine C++-Funktion entworfen werden, die folgende Summe berechnet:
    N = 1+2+3+...+n

    Die Zahl n soll als Parameter an diese Funktion übergeben werden.
    Der Name der Funktion sei "summe".

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION FUNKTIONEN
int summe(int );
#pragma endregion

#pragma region DEFINITION FUNKTIONEN
/// <summary>
/// Funktion, die folgende Summe N berechnet: N = 1+2+3+...+n
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int summe(int n)
{
    int a = 0;

    while (n > 0)
    {
        a = a + n;
        n = n - 1;
    }

    return(a);
}
#pragma endregion


#pragma region HAUPTPROGRAMM
int main(void)
{
    int n;

    std::cout << "Eingabe n: ";
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "Summe: " << summe(n);
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion


