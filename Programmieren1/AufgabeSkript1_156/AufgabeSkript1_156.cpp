/* Projekt AufgabeSkript1_156 */

/* Aufgabe:

    Entwickeln Sie C++-Programm, das prüft, ob ein als String übergebenes
    Passwort pw die folgenden drei Bedingungen erfüllt:

        •pw besteht aus mindestens 8 Zeichen
        •pw enthält mindestens einen Großbuchstaben
        •pwe nthält mindestens eine Ziffer

    Erfüllt ein Passwort pwalle drei Bedingungen soll die Meldung „starkes Passwort“
    ausgegeben werden, ansonsten die Meldung „schwaches Passwort“.

    Beispiel:
    Nach Eingabe des Passworts „Hallodu1“ wird „starkes Passwort“ ausgegeben.
    Nach Eingabe des Passworts „Servus2“ wird „schwaches Passwort“ ausgegeben.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <string>
#pragma endregion

#pragma region DEKLARATION
bool hasMinEightSigns(std::string);
bool oneSignIsUpperCase(std::string);
bool oneSignIsNumber(std::string);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    bool results[3] = { false };
    bool result = true;

    std::string passWord;

    std::cout << "Eingabe Passwort: ";
    std::cin >> passWord;

    results[0] = hasMinEightSigns(passWord);
    results[1] = oneSignIsUpperCase(passWord);
    results[2] = oneSignIsNumber(passWord);

    for (std::size_t i = 0; i < 3; i++)
    {
        if (results[i] == false)
        {
            result = false;
            break;
        }
    }

    if (result == true)
        std::cout << "Ergebnis f\x81r Passwort \"" << passWord << "\": Starkes Passwort" << std::endl;
    else
        std::cout << "Ergebnis f\x81r Passwort \"" << passWord << "\": Schwaches Passwort" << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
bool hasMinEightSigns(std::string s)
{
    return((s.length() >= 8));
}
bool oneSignIsUpperCase(std::string s)
{
    for (std::size_t i = 0; i < s.length(); i++)
    {
        if ((int)(s[i]) >= 65 && (int)(s[i]) <= 90)
            return(true);
    }

    return(false);
}
bool oneSignIsNumber(std::string s)
{
    for (std::size_t i = 0; i < s.length(); i++)
    {
        if ((int)(s[i]) >= 48 && (int)(s[i]) <= 57)
            return(true);
    }

    return(false);
}
#pragma endregion


