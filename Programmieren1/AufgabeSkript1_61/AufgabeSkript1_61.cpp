/* Projekt: AufgabeSkript1_61 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches einen Groﬂbuchstaben von der Tastatur einliest
    und den entsprechenden Kleinbuchstaben am Bildschirm ausgibt.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
char upperToLowerCase(char);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    char input;

    std::cout << "Eingabe Gro\xE1 \bbuchstabe: ";
    std::cin >> input;
    std::cout << std::endl;
    std::cout << "Eingabe: " << input << " | " << "Ausgabe: " << upperToLowerCase(input);

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche einen eingegebenen Groﬂbuchstaben in den entsprechenden Kleinbuchstaben umwandelt.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
char upperToLowerCase(char a)
{
    return((char)(a + 32));
}
#pragma endregion





