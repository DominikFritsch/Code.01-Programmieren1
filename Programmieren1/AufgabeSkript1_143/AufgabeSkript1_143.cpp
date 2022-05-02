/* Projekt: AufgabeSkript1_143 */

/* Aufgabe:

    Schreiben Sie eine C++-Funktion die eine benutzerdefinierte Anzahl von float-Zahlen einliest
    und sortiert mit Hilfe des Bubble-Sort ausgibt. Für die Speicherung soll ein Vector-Container
    verwendet werden.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <vector>
#pragma endregion

#pragma region DEKLARATION
void vectorExample(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "---------------------------" << std::endl;
    vectorExample();
    std::cout << "---------------------------" << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
void vectorExample(void)
{
    int n = 0;

    std::cout << "Anzahl der float-Zahlen: ";
    std::cin >> n;

    std::vector<float>v(n);

    for (int i = 0; i < n; i++)
    {
        float tempInput;
        std::cout << "Eingabe float-Zahl " << i+1 << ": ";
        std::cin >> v.at(i);
    }

    for (std::size_t i1 = 0; i1 < v.size(); i1++)
    {
        for (std::size_t i2 = 0; i2 < v.size() -i1 -1; i2++)
        {
            if (v.at(i2) > v.at(i2 + 1))
            {
                float temp = v.at(i2 + 1);
                v.at(i2 + 1) = v.at(i2);
                v.at(i2) = temp;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
        std::cout << "Wert " << i + 1 << ": " << v.at(i) << std::endl;

}
#pragma endregion


