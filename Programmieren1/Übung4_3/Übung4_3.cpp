/* Projekt: Übung4_3 */

/* Aufgabe:

    Schreiben Sie eine C++ Funktion char* to_upper(const char* str), 
    die den übergebenen String in Großbuchstaben umwandelt.

*/

#pragma region HEADER
#include <iostream>
#pragma endregion

#pragma region DEKLARATION
char* to_upper(const char*);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "Eingabe: Hallo | Ausgabe: " << to_upper("Hallo");
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
char* to_upper(const char* str)
{
    std::size_t length = std::strlen(str);

    char* result = new char[length];

    for (size_t i = 0; i < length; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            result[i] = (char)((int)str[i] - 32);
        else
            result[i] = str[i];
    }

    result[length] = '\0';

    return(result);
}
#pragma endregion
