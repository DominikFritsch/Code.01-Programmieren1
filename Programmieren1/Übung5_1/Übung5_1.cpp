/* Projekt: Übung5_1 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches alle pythagoreischen Zahlentripel bis zu einer
    gegebenen Obergrenze upperBound findet. Diese Obergrenze soll von der Tastatur eingelesen
    werden. Ein Zahlentripel (a, b, c) ist pythagoreisch, wenn gilt a^2 + b^2 = c^2.

    Schreiben Sie dazu die beiden Funktionen
        - bool is_pythagorean_triple(int a, int b, int c)
        - find_pythagorean_triple(int upperBound)

    is_pythagorean_triple() dient zur Prüfung, ob ein Zahlentripel pythagoreisch ist oder
    nicht. find_pythagorean_triple() findet alle Tripel bis zur gegebenen Obergrenze, indem
    die erste Funktion verwendet wird.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cmath>
#pragma endregion

#pragma region DEKLARATION
bool is_pythagorean_triple(int, int, int);
void find_pythagorean_triple(int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int n;

    std::cout << "Eingabe Obergrenze: ";
    std::cin >> n;

    find_pythagorean_triple(n);

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
bool is_pythagorean_triple(int a, int b, int c)
{
    if (a == 0 || b == 0 || c == 0)
        return(false);
    if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2))
        return(true);
    else
        return(false);
}
void find_pythagorean_triple(int upperBound)
{
    for (size_t a = 0; a < upperBound; a++)
    {
        for (size_t b = 0; b < upperBound; b++)
        {
            for (size_t c = 0; c < upperBound; c++)
            {
                if (is_pythagorean_triple(a, b, c))
                    std::cout << "(" << a << ", " << b << ", " << c << ")" << std::endl;
            }
        }
    }

    std::cout << std::endl;
}
#pragma endregion