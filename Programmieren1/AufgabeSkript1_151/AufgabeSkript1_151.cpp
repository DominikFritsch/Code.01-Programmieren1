/* Projekt: AufgabeSkript1_151 */

/* Aufgabe:

    Ein C++-Programm enthält folgende for-Schleife:

    const int N = 10;
    for(size_t i = N; i >= 0; i--)
        std::cout << i << std::endl;

    Welches Problem tritt hier auf?

*/

/* Lösung:

    Der Datentyp size_t ist vorzeichenlos:
    Die for-Schleife kann nicht verlassen werden --> Endlosschleife

    Bug-Fixing: std::size_t i = N --> int i = N

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cstddef>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    const int N = 10;
    for (int i = N; i >= 0; i--)
        std::cout << i << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion