/* Projekt AufgabeSkript1_155 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches von der Tastatur eine Zahl als
    String seinliest.

    Prüfen Sie zunächst, ob wirklich alle Zeichen dieses Strings saus Ziffern
    bestehen. Falls dies zutrifft, prüfen Sie, ob die so in sabgespeicherte
    Dezimalzahl bei Spiegelung den gleichen Wert behält (Spiegelzahl) und geben
    Sie das Ergebnis am Bildschirm aus.

*/

#pragma region HEADER
#include <iostream>
#include <string>
#pragma endregion

#pragma region DEKLARATION
bool isMirrorNumber(std::string);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::string input;

    std::cout << std::boolalpha;

    std::cout << "Eingabe Zahl: ";
    std::cin >> input;

    std::cout << "Eingegebene Zahl ist eine Spiegelzahl: " << isMirrorNumber(input);
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
bool isMirrorNumber(std::string s)
{
    int i1 = s.length() - 1;

    for (std::size_t i2 = 0; i2 < s.length(); i2++)
    {
        if ((int)(s[i2]) < 48 || (int)(s[i2]) > 57)
            return(false);//Keine Zahl

        if (s[i1] != s[i2])
            return(false);//Keine Übereinstimmung

        i1--;
    }

    return(true);
}
#pragma endregion