/* Projekt: Übung3_7 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches folgenden Bildschirmausdruck unter Benutzung
    von Schleifen und Kontrollstrukturen erzeugt:

    012345678901234567890123456789012345678901234567890123456789
    012345678901234567890123456789012345678901234567890123456789
    012345678901234567890123456789012345678901234567890123456789
    012345678901234567890123456789012345678901234567890123456789
    012345678901234567890123456789012345678901234567890123456789

    --> 5 Zeilen --> 6 Wiederholungen --> 10 Zahlen

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    for (int i1 = 0; i1 < 5; i1++) //Zeilen
    {
        for (int i2 = 0; i2 < 6; i2++)//Wiederholungen
        {
            for (int i3 = 0; i3 < 10; i3++)//Zahlen
            {
                std::cout << i3;
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion



