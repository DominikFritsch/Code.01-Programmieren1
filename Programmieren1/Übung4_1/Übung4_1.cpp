/* Projekt: Übung4_1 */

/* Aufgabe:

    Schreiben Sie eine C++ Funktion void eratothenes(int n), welche die Primzahlen bis
    zu einer Obergrenze n ermittelt. Gehen Sie dabei wie folgt vor:
        -Erzeugen Sie sich ein Feld der Größe n mit booleschen Werten. Der Feldindex
         entspricht der Zahl, die prim oder nicht prim sein kann.
        -Markieren Sie alle Vielfachen von 2 – diese können keine Primzahlen sein – als false.
    Markieren Sie danach alle Vielfachen von 3 als false – diese können auch keine
    Primzahlen sein, usw.
    Geben Sie nach Ermittlung aller Primzahlen diese aus.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void eratosthenes(int);
void eratosthenesModulo(int);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int input;
    std::cout << "Feldgr\x94\xE1 \be: ";
    std::cin >> input;

    std::cout << std::endl;
    std::cout << "---------------------------------------------------------";
    std::cout << std::endl;
    eratosthenes(input);
    std::cout << std::endl;
    std::cout << "---------------------------------------------------------";
    std::cout << std::endl;
    eratosthenesModulo(input);
    std::cout << std::endl;
    std::cout << "---------------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche alle Primzahlen in einem dynamischen Bereich bestimmt (ohne Modulo-Operator).
/// Sieb des Eratosthenes
/// </summary>
/// <param name="n"></param>
void eratosthenes(int n)
{
    bool* pToArray = new bool[n];

    for (int i = 0; i < n; i++) pToArray[i] = true;

    for (int i1 = 0; i1 < n; i1++)
    {

        if (i1 == 0) pToArray[i1] = false;
        else if (i1 == 1) pToArray[i1] = false;
        else
        {
            /* n ist 5 */

            /*
                i1 = 2
                i2 = 2 * i1;        i2 < n;     i2 = i2 + i1
                i2 = 2 * 2 = 4;     4  < 5;     i2 = 4 + 1;
            */

            /*
                i1 = 3
                i2 = 2 * i1;        i2 < n;     i2 = i2 + i1
                i2 = 2 * 3 = 6;     6 < 5;
            */

            /*
                i1 = 4
                i2 = 2 * i1;        i2 < n;     i2 = i2 + i1
                i2 = 2 * 4 = 8;     8  < 5;
            */

            for (int i2 = 2 * i1; i2 < n; i2 += i1) pToArray[i2] = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (pToArray[i])std::cout << i << " = Primzahl.";
        else std::cout << i;

        std::cout << std::endl;
    }
}
/// <summary>
/// Funktion, welche alle Primzahlen in einem dynamischen Bereich bestimmt (mit Modulo-Operator).
/// Sieb des Eratosthenes
/// </summary>
/// <param name="n"></param>
void eratosthenesModulo(int n)
{
    bool* pToArray = new bool[n];

    for (int i = 0; i < n; i++)
    {
        if (i == 0) pToArray[i] = false;
        else if (i == 1) pToArray[i] = false;
        else pToArray[i] = true;
    }

    int k = 2;

    for (int i = 2; i < n; i++)
    {

        // i                        2       3       4       5       6       7       8       ...     n
        // pToArray[i]              true    true    true    true    true    true    true    ...     -
        // k==2

        if (i != k && i % k == 0) pToArray[i] = false;

        // k==2
        // pToArray[i]              true    true    false   true    false   true    false    ...    -  

        // k==3
        // pToArray[i]              true    true    false   true    false   true    false    ...    -   

        // k==5
        // pToArray[i]              true    true    false   true    false   true    false    ...    -  

        // k==7
        // pToArray[i]              true    true    false   true    false   true    false    ...    -  

        if (i == n - 1) //Letzes i
        {
            for (int j = k + 1; j < n; j++)//Suche nach nächstmöglichen Vielfachen
            {
                if (pToArray[j])
                {
                    k = j; // k = 3,5,7
                    i = j;
                    break;
                }
            }
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        if (pToArray[i])std::cout << i << " = Primzahl.";
        else std::cout << i;

        std::cout << std::endl;
    }
}
#pragma endregion
