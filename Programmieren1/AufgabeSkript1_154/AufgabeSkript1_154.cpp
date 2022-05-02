/* Projekt AufgabeSkript1_154 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches von der Tastatur einen String
    seinliest.

    Geben Sie diesen String sdann in umgekehrter Reihenfolge wieder am
    Bildschirm aus!

    Geben Sie dafür die Zeichen des Strings szeichenweise vom letzten bis
    zum ersten aus.

    Beispiel:
    EINGABE: Schweinfurt    AUSGABE:trufniewhcS

*/

#pragma region HEADER
#include <iostream>
#include <string>
#pragma endregion

#pragma region DEKLARATION
std::string reverseString(std::string);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::string result;
    std::string input;

    std::cout << "Eingabe Wort: ";
    std::cin >> input;

    result = reverseString(input);

    std::cout << "Umgekehrter String : " << result;
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
std::string reverseString(std::string s)
{
    std::string temp = "";

    for (int i = s.length() - 1; i >= 0; --i)
    {
        temp += s[i];
    }

    return(temp);
}
#pragma endregion