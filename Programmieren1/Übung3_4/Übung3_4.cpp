/* Projekt: Übung3_4 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches von der Tastatur einen float Wert einliest
    (die eingegebene float Zahl soll die Bezeichnung x haben). Am Bildschirm soll dann
    ausgegeben werden sin(x) = <Wert>.

    Berechnen Sie den Sinus mit folgender Näherung:

    sum_{n=0}^{inf} (-1)^n * \frac{x^{2n+1}}{(2n+1)!}

    Die Näherungsreihe soll abgebrochen werden, wenn der Absolutwert des letzten Gliedes
    kleiner als 0,0001 ist.

    Bemerkung:
    Sie können die Standardfunktion double fabs (double x); aus der Header-Datei math.h
    verwenden, um den Betrag einer Zahl zu berechnen.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cmath>
#pragma endregion

#pragma region DEKLARATION
double pow(float, int);
double fac(int);
#pragma endregion

#pragma region MAKROS
#define PI 3.14159265
#pragma endregion


#pragma region HAUPTPROGRAMM
int main(void)
{
    float x;
    double summand = 0.0;
    double sum = 0.0;
    

    std::cout << "Gradzahl: ";
    std::cin >> x;
    std::cout << std::endl;
    // 360Grad entpricht 2PI
    // xGrad entspricht x
    // --> x * 360Grad = 2PI * xGrad --> x = (2PI * xGrad) / 360Grad = ((x*PI)/180)

    x = ((x*PI)/180); //Umwandlung Grad in Radiant

    int n = 0;

    do
    {
        summand = pow((float)-1, n) * (pow(x, (2 * n + 1)) / fac(2 * n + 1));

        sum += summand;
        ++n;

    } while (std::fabs(summand) > 0.0001);


    std::cout << "sin(" << x << ") = " << sum << "\t\t|\t sin(" << x <<") = " << std::sin(x);

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche die Potenz einer übergebenen Basis und eines übergebenen Exponenten berechnet.
/// </summary>
/// <param name="a">Basis</param>
/// <param name="b">Exponent</param>
/// <returns></returns>
double pow(float a, int b)
{
    double result = 1.0;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }

    return(result);
}
/// <summary>
/// Funktion, welche die Fakultät der übergebenen Zahl berechnet.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
double fac(int a)
{
    if (a <= 0) return(1);
    else return(fac(a-1)*a);
}
#pragma endregion



