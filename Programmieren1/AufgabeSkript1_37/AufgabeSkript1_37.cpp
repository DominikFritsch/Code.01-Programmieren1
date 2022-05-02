/* Projekt: AufgabeSkript1_37 */

/* Aufgabe:

    Der Mathematiker Gauß´fand mit 9 Jahren seine berühmte Summenformel:

    N = 1+2+3+...+n = (n*(n+1)/2)

    Schreiben Sie eine Funktion, die die zuvor genannte Summenformel implementiert.

    Die Zahl n soll als Parameter an diese Funktion übergeben werden.
    Der Name der Funktion sei "summe".

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION FUNKTIONEN
int summe(int);
#pragma endregion

#pragma region DEFINITION FUNKTIONEN
/// <summary>
/// Funktion, welche die Summe nach der gaußschen Summenformel berechnet.
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int summe(int n)
{
    return((n * (n + 1)) / 2);
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



