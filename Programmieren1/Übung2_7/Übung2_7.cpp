/* Projekt: Übung2_7 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches vom Benutzer eine Zahl zwischen 1 und 20
    einliest und entscheidet, ob die Zahl prim ist.
    
    Zur Erinnerung: eine Zahl ist prim, genau dann wenn sie nur durch 1 und sich selbst ohne Rest teilbar.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
bool isPrime(int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int input;

    do
    {
        std::cout << "Eingabe Zahl von 1 und 20: ";
        std::cin >> input;

        if (input < 1 || input > 20)
        {
            std::cout << "Falsche Eingabe!";
            std::cout << std::endl;
            std::cout << std::endl;
        }
        
    } while (input < 1 || input > 20);

    std::cout << std::endl;
    
    if (isPrime(input)) std::cout << "Die eingegebene Zahl " << input << " ist eine Primzahl.";
    else std::cout << "Die eingegebene Zahl " << input << " ist keine Primzahl.";

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche überprüft ob die übergebene Zahl primitiv ist.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
bool isPrime(int a)
{
    bool result = true;

    if (a == 1) return (false);


    int i = 2;
    while (a >= i)
    {
        if (((a%i) == 0) && a!=i)
        {
            result = false;
            break;
        }
        ++i;
    }

    return(result);
}
#pragma endregion