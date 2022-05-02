/* Projekt: AufgabeSkript1_122 */

/* Aufgabe:

    Schreiben Sie (zunächst in Metasprache) ein Programm, welches für eine
    eingelesene ganze Zahl prüft, ob diese größer als Null ist.
    In diesem Fall soll am Bildschirm die letzte Ziffer dieser Zahlausgegeben
    werden.
    Falls die Zahl kleiner oder gleich 0 ist, soll die Eingabe wiederholt werden, bis
    eine Zahl größer als Null eingegeben wird!
    Setzen Sie Ihren Metaspracheentwurf in ein lauffähiges C++ Programm um.

*/

/* Metasprache:

    lies z
    falls (z>0)
        gib aus: z%10

    solgane (z kleiner oder gleich 0)

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int z;


    do
    {
        std::cout << "Eingabe Zahl > 0: ";
        std::cin >> z;

        if(z > 0)
            std::cout << "Letzte Ziffer der Zahl: " << z % 10 << std::endl;

    } while (z <= 0);


    std::system("pause");
    return(0);
}
#pragma endregion