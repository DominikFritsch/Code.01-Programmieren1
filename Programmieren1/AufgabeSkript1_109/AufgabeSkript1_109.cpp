/* Projekt AufgabeSkript1_109 */

/* Aufgabe:

    Schreiben Sie eine C++-Funktion, welche den Mittelwert einer Folge von int-Zahlen bestimmt.
    Die Zahlenfolge soll mit der Zahl 0 enden. Diese Zahl ist bei der Mittelwertsbildung nicht
    zu berücksichtigen. Es wird mindestens eine Zahl ungleich 0 eingegeben.

    Schreiben Sie eine weitere C++-Funktion, welche beliebig viele float-Zahlen von der Tastatur
    einliest, bis eine Zahl kleiner als 0 eingegeben wird. Es soll dann die Zahl am Bildschirm
    ausgegeben werden, die am größten ist. Sie können davon ausgehen, dass die erste eingelesene Zahl
    größer als 0 ist.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION: FUNKTION
float calculateAverage(void);
float highestNumber(void);
#pragma endregion


#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "Mittelwert:\t" << calculateAverage();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Gr\x94\xE1te Zahl:\t" << highestNumber();
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion


#pragma region DEFINITION: FUNKTION
/// <summary>
/// Funktion, welche den Mittelwert einer eingegebenen Zahlenfolge berechnet.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
float calculateAverage(void)
{
    float input;
    float sum = 0;
    int counter = 0;

    do
    {
        std::cout << "Eingabe: ";
        std::cin >> input;

        if (input != 0)
        {
            sum += input;
            ++counter;
        }

    } while (input !=0);


    return(sum / counter);
}
/// <summary>
/// Funktion, welche die höchste eingegebene Zahl ermittelt.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
float highestNumber(void)
{

    float input;
    float maxValue = -1.0f;

    do
    {
        std::cout << "Eingabe: ";
        std::cin >> input;

        if (input > 0.0f)
        {
            if (input > maxValue) maxValue = input;
        }


    } while (input > 0.0f);

    return(maxValue);
}
#pragma endregion
