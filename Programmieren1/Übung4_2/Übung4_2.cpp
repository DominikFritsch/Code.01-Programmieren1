/* Projekt: Übung4_2 */

/* Aufgabe:
    
    Schreiben Sie eine C++ Funktion bool palindrome(const char* str), die prüft, ob die
    übergebene Zeichenkette ein Palindrom ist. Ein Palindrom ist vorwärts und rückwärts
    gelesen das gleiche Wort. Sie können Groß- und Kleinschreibung ignorieren.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <string>
#pragma endregion

#pragma region DEKLARATION
bool palindrome(const char*, int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    bool result;
    int size;

    char pToArray[] = { 'a', 'n', 'n', 'n', 'n', 'a' };

    size = sizeof(pToArray) / sizeof(pToArray[0]);
    result = palindrome(pToArray, size);

    if (result == 1) std::cout << "Es handelt sich um ein Palindrom.";
    else std::cout << "Kein Palindrom.";

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche überprüft ob ein String ein Palindrom ist.
/// </summary>
/// <param name="str"></param>
/// <returns></returns>
bool palindrome(const char* str, int size)
{
    int i = 0;
    int j = size - 1;

    bool result = true;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            result = false;
            break;
        }

        ++i;
        --j;
    }

    return(result);
}
#pragma endregion