/* Projekt: Übung2_1 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, das einen Kleinbuchstaben von der Tastatur einliest
    und in einen Großbuchstaben umwandelt. Falls kein Kleinbuchstabe eingegeben wurde, soll
    eine Fehlermeldung ausgegeben werden.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
char lowerToUpperCase(char);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    char input;

    do
    {
        std::cout << "Eingabe Kleinbuchstabe: ";
        std::cin >> input;

        if (((int)input < 97) || ((int)input > 122))
        {
            std::cout << "Falsche Eingabe!";
            std::cout << std::endl;
            std::cout << std::endl;
        }

    } while ( ((int)input < 97) || ((int)input > 122) );

    std::cout << std::endl;
    std::cout << "Eingabe: " << input << " | " << "Ausgabe: " << lowerToUpperCase(input);

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche einen eingegebenen Kleinbuchstaben in den entsprechenden Großbuchstaben umwandelt.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
char lowerToUpperCase(char a)
{
    return((char)(a - 32));
}
#pragma endregion