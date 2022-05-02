/* Projekt: AufgabeSkript1_128 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches von der Tastatur eine Gradzahl als float-Größe
    einliest und den Sinus dieser Gradzahl berechnet. 
    
    Die eingegebene float-Zahl soll die Bezeichnung x haben.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cmath>
#pragma endregion

#pragma region DEKLARATION
double fac(int);
void approximateSin(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    approximateSin();

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
double fac(int n)
{
    if (n <= 0) return(1);
    else return(fac(n - 1) * n);
}
void approximateSin(void)
{
    float x;
    double summand = 0.0;
    double sum = 0.0;
    const float PI = 3.14159265f;

    std::cout << "Gradzahl: ";
    std::cin >> x;
    std::cout << std::endl;
    // 360Grad entpricht 2PI
    // xGrad entspricht x
    // --> x * 360Grad = 2PI * xGrad --> x = (2PI * xGrad) / 360Grad = ((x*PI)/180)

    x = ((x * PI) / 180); //Umwandlung Grad in Radiant

    int n = 0;

    do
    {
        summand = pow((float)-1, n) * (pow(x, (2 * n + 1)) / fac(2 * n + 1));

        sum += summand;
        ++n;

    } while (std::fabs(summand) > 0.0001);


    std::cout << "sin(" << x << ") = " << sum << "\t\t|\t sin(" << x << ") = " << std::sin(x);
    std::cout << std::endl;
}
#pragma endregion