/* Projekt: AufgabeSkript1_148 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches einen vector-Container definiert, diesen mit Werten 
    füllt und anschließend mithilfe des eingebauten Sortieralgorithmus sortiert ausgibt.

*/

#pragma region HEADER
#include <iostream>
#include <vector>
#include <cstddef>
#include <algorithm>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::vector<float> w(6);

    std::size_t i;
    
    std::cout << "Sechs float-Gr\x94\xE1 \ben eingeben:\n";

    for ( i = 0; i < 6; i++)
        std::cin >> w[i];

    std::sort(w.begin(), w.end());

    std::cout << std::endl;
    std::cout << "---------------Sortierte Ausgabe---------------";
    std::cout << std::endl;

    for (i = 0; i < 6; i++)
        std::cout << w[i] << " " << std::endl;

    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion



