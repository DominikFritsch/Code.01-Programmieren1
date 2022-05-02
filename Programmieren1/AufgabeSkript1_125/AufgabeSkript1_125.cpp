/* Projekt: AufgabeSkript1_125 */

/* Aufgabe:

    Schreiben Sie ein C++-Funktion, welche den übergebenen 13 stelligen EAN-Code auf Korrektheit
    überprüft.

    Vorgehensweise:
        - Die ersten 12 Stellen werden abwechselnd mit 1 und 3 gewichtet
        - Die sich ergebenden Ziffern werden summiert
        - Die 13. Stelle (Prüfziffer) ist der volle Rest zur nächsthöheren durch
          10 teilbaren Zahl (Modulo 10).

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <string>
#pragma endregion

#pragma region DEKLARATION
bool checkEANCode(std::string);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::string eanTrue = "0012345678905";
    std::string eanFalse = "0012345678903";

    std::cout << std::boolalpha;

    std::cout << "Richtiger EAN-Code... Ergebnis = " << checkEANCode(eanTrue) <<std::endl;
    std::cout << "Falscher EAN-Code... Ergebnis = " << checkEANCode(eanFalse) << std::endl;

    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
bool checkEANCode(std::string ean)
{
    long sum = 0;

    for (int i = 0; i < ean.length()-1; i++)
    {
        if (i % 2 == 0)
            sum += (((int)ean[i]-48) * 1);
        else
            sum += (((int)ean[i] - 48) * 3);
    }

    if ((sum % 10) == ((int)ean[ean.length()-1]-48))
        return(true);

    return(false);
}
#pragma endregion
