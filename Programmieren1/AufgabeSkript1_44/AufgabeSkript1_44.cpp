/* Projekt: AufgabeSkript1_44 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben.

    Die Funktion clscrn gibt keinen R�ckgabewert an die main-Funktion.

    Was bewirkt sie?

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void clscrn(void);
#pragma endregion

#pragma region DEFINITION
void clscrn(void)
{
    int h = 60;
    while (h > 0)
    {
        std::cout << std::endl;
        h = h - 1;
    }
}
#pragma endregion

#pragma region HAUPTPROGRAMM
int main()
{
    std::cout << "Hallo !" << std::endl;
    clscrn();
    std::cout << "Hier bin ich !" << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

/*
    Antwort:    Die Funktion clscrn(void) f�gt 60 Zeilenumbr�che (Leerzeilen) ein, wodurch
                die Ausgabe "Hallo !" nach oben geschoben wird. Dadurch wird ein sogenannter
                clear sreen vorget�uscht, da die Kommandozeile maximal 60 Zeilen umfasst.
*/

