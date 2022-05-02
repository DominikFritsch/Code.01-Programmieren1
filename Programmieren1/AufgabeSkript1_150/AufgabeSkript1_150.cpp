/* Projekt AufgabeSkript1_150 */

/* Aufgabe 1:

    Schreiben Sie ein C++ Programm, welches ein float-Array
    vector<float>w(n) vereinbart und mit Werten füllt.

    Die Größe nund die float-Werte für das Array w sollen von der Tastatur
    eingelesen werden.

    Es soll dann der Feldindex i am Bildschirm ausgegeben werden, für den sich
    w[i] und eine dann von der Tastatur eingelesene float-Größe key um
    weniger als 0.001 unterscheiden.

    Falls sich keine der Werte w[i] von key um weniger als 0.001 unterscheidet,
    soll -1 am Bildschirm ausgegeben werden.

    Falls sich mehrere der Werte w[i] von key um weniger als 0.001
    unterscheiden, soll der Index i am Bildschirm ausgegeben werden, der am
    kleinsten ist.

*/

/* Aufgabe 2:

    Erweitern Sie das Programm wie folgt:
    Es soll nun der größte Index i ausgegeben werden, für den sich die Werte w[i]
    von key um weniger als 0.001 unterscheiden.

*/

#pragma region HEADER
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstddef>
#include <cmath>
#pragma endregion

#pragma region MAKRO
#define VALUE 0.001
#pragma endregion


#pragma region HAUPTPROGRAMM
int main(void)
{
    int n;//Anzahl der Feldelemente
    float key;
    int counter = 0;
    int minIndex = -1;
    int maxIndex = -1;


    std::cout << "Anzahl Feldelemente: ";
    std::cin >> n;

    std::vector<float> v(n);

    std::cout << "Eingabe Schl\x81ssel: ";
    std::cin >> key;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << "Feldindex: " << i<<" | Eingabe Wert von Position " << i + 1 << ":\t";
        std::cin >> v.at(i);

        if (fabs(v.at(i) - key) < VALUE)
        {
            if (counter == 0) minIndex = i;
            if (counter >= 0) maxIndex = i;
            ++counter;   
        }
    }

    if (counter == 0) std::cout << std::endl << "Ergebnis: " << -1;
    else std::cout << std::endl  << "Minimaler Feldindex: " << minIndex << " und maximaler Feldindex: " << maxIndex;

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion
