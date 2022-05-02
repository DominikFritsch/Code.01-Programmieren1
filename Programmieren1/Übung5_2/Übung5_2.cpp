/* Projekt: Übung5_2 */


/* Aufgabe 1:

    Die Internationale Standardbuchnummer ISBN-10 ist eine Nummer zur eindeutigen
    Kennzeichnung von Büchern und anderen selbstständigen Veröffentlichungen mit
    redaktionellem Anteil, die aus 10 Ziffern besteht, z.B. 3-86680-192-0.

    Die letzte Ziffer ist dabei eine Prüfziffer, die aus den anderen 9 Ziffern berechnet wird – im
    obigen Beispiel die Ziffer 0. Die Formel zur Berechnung der Prüfziffer lautet:

    z_{10} = ( sum^{9}_{i=1} i * z_{i} ) mod 11

    Schreiben Sie ein C++ Programm, dass die ersten 9 Ziffern der ISBN als long long Zahl
    einliest und die entsprechende Prüfziffer berechnet und ausgibt.
    Hinweis:
    Sie können die Funktion int pow(int x, int n) benutzen, die die Potenz x^n berechnet.

*/


/* Aufgabe 2:

    Die Internationale Standardbuchnummer ISBN-13 ist eine Nummer zur eindeutigen Kennzeichnung
    von Büchern und anderen selbstständigen Veröffentlichungen mit redaktionellem
    Anteil, die aus 13 Ziffern besteht.

    Beispiel: 978-3-12-732320-7

    Die letzte Ziffer ist dabei eine Prüfziffer, die aus den anderen 12 Ziffern berechnet wird
    im obigen Beispiel die Ziffer 7. Die Formel zur Berechnung der Prüfziffer lautet:


    z_{13} = (10 - ( sum^{12}_{1} z_i * 3^{(i+1) mod 2}) mod 10 ) mod 10

    Schreiben Sie ein C++ Programm, dass die ersten 12 Ziffern der ISBN als long long Zahl
    einliest und die entsprechende Prüfziffer berechnet und ausgibt.
    Hinweis:
    Sie können die Funktion int pow(int x, int n) benutzen, die die Potenz x^n berechnet.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#pragma endregion

#pragma region DEKLARATION
int calculateCheckDigitISBN10(long long);
int calculateCheckDigitISBN13(long long);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "Pruefziffer = " << calculateCheckDigitISBN10(386680192L)<< std::endl;
    std::cout << "Pruefziffer = " << calculateCheckDigitISBN10(368008783L) << std::endl;
    std::cout << "Pruefziffer = " << calculateCheckDigitISBN10(136800878L) << std::endl;
    
    std::cout << "--------------------------------------" << std::endl;

    std::cout << "Pruefziffer = " << calculateCheckDigitISBN13(978312732320L) << std::endl;
    std::cout << "Pruefziffer = " << calculateCheckDigitISBN13(978312732390L) << std::endl;
    std::cout << "Pruefziffer = " << calculateCheckDigitISBN13(197831273239L) << std::endl;

    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
int calculateCheckDigitISBN10(long long number)
{

    if (number < 0L || number > 999999999L)
    {
        std::cout << "Number out of range.";
        std::cout << std::endl;
        return(-1);
    }

    int sum = 0;
    int digits[9] = { 0 };

    for (int i = 8; i >= 0; i--)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 1; i <= 9; i++)
    {
        sum += ( i * digits[i-1]);
    }

    return(sum % 11);
}

int calculateCheckDigitISBN13(long long number)
{
    if (number < 0L || number > 999999999999L)
    {
        std::cout << "Number out of range.";
        std::cout << std::endl;
        return(-1);
    }

    int sum = 0;
    int digits[12] = { 0 };

    for (int i = 11; i >= 0; i--)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 1; i <= 12; i++)
    {
        sum += digits[i - 1] * std::pow(3, ((i + 1) % 2));
    }

    return((10 - (sum % 10)) % 10);

}
#pragma endregion


