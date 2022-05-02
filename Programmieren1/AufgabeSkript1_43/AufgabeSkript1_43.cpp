/* Projekt: AufgabeSkript1_43 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben.

    Die Funktion lzeile gibt keinen Rückgabewert an die main-Funktion.

    Was bewirkt sie?

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void lzeile(int n);
#pragma endregion

#pragma region DEFINITION
void lzeile(int n)
{
    while (n > 0)
    {
        std::cout << std::endl;
        n = n - 1;
    }
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    
    std::cout << "1" << std::endl;
    lzeile(3);
    std::cout << "2" << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

/*
    Antwort: Die Funktion lzeile(n) fügt n Zeilenumbrüche (Leerzeilen) ein. Hier 3 Zeilenumbrüche.
*/