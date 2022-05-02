/* Projekt: Übung1_2 */

/* Aufgabe:

    Erstellen Sie ein C++-Programm, welches die Fakultät einer Zahl berechnet. Die Fakultät der Zahl n ist wie folgt
    definiert:

                    factorial(n) = 1 * 2 * 3 * ... * n = n!

    Das Programm soll folgende Ausgabe erzeugen:

    factorial(1) = 1
    factorial(2) = 2
    factorial(3) = 6
    factorial(4) = 24
    factorial(5) = 120
    factorial(6) = 720
    factorial(7) = 5040
    factorial(8) = 40320
    factorial(9) = 362880

    Für welches n arbeitet die Fakultät noch korrekt? Begründen Sie.

*/

#include <cstdlib>
#include <iostream>

int factorial(int);
int factorialRecursive(int);
double factorialDouble(int);

int main(void)
{
    int tempResultInt = 0;
    double tempResultDouble = 0.0;
    int maxN = 0;

    for (int n = 1; n <= 25; n++)
    {
        tempResultInt = factorial(n);
        tempResultDouble = factorialDouble(n);

        if ((double)tempResultInt != tempResultDouble)
        {
            maxN = n - 1;
            break;
        }

        std::cout << "factorial(" << n << ") = " << tempResultInt;
        std::cout << std::endl;
    }
  
    std::cout << std::endl;
    std::cout << "-----------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Min. int-Wert: " << INT_MIN << std::endl << "Max. int-Wert: " << INT_MAX;
    std::cout << std::endl;
    std::cout << "Max. n bei der die Funktion der Fakult\x84t noch richtig arbeitet: " << maxN;
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}

/// <summary>
/// Variante 1: Berechnung der Fakultät von n.
/// </summary>
/// <param name="n"></param>
/// <returns> Datentyp: int </returns>
int factorial(int n)
{
    int i = 1;

    while (n > 1)
    {
        i *= n;
        --n;
    }

    return(i);
}

/// <summary>
/// Variante 2: Berechnung der Fakultät von n.
/// </summary>
/// <param name="n"></param>
/// <returns> Datentyp: int </returns>
int factorialRecursive(int n)
{
    if (n <= 0) return(1);
    else return(factorialRecursive(n - 1) * n);
}

/// <summary>
/// Berechnung der Fakultät von n.
/// </summary>
/// <param name="n"></param>
/// <returns> Datentyp: double </returns>
double factorialDouble(int n)
{
    if (n <= 0) return(1);
    else return(factorialDouble(n - 1) * n);
}
