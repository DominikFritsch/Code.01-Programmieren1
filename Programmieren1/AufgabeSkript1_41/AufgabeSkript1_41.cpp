/* Projekt: AufgabeSkript1_41 */

/* Aufgabe:

    Es ist folgendes C++-Programm gegeben.

    Welche Größen sind lokal, welche global?
    Wie sieht die Bildschirmausgabe aus?

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region GLOBALE VARIABLEN
int n = 5;
#pragma endregion

#pragma region DEKLARATION FUNKTIONEN
int u1(int k);
#pragma endregion

#pragma region DEFINITION FUNKTIONEN
int u1(int k)
{
    int m = 2;
    std::cout << k << " " << m << " " << n << std::endl;
    n = n - 1;
    return(k + m);
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int m = 3, j;
    j = u1(m);
    std::cout << m << " " << j << " " << n << std::endl;
    j = u1(m);
    std::cout << m << " " << j << " " << n << std::endl;
    
    std::system("pause");
    
    return(0);
}
#pragma endregion


/*

    Globale Variablen:  n
    Lokale Variablen:   m, k, j

    Erwartete Ausgabe:

    Lfd.-Nr.:   k       m       j       n
    1           3       2       -       5
    2           -       3       5       4
    3           3       2       -       4
    4           -       3       5       3

*/

