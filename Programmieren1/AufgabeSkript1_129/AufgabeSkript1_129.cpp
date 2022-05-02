/* Projekt: AufgabeSkript1_129 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches von der Tastatur beliebig viele
    reelle Zahlen aus dem Intervall [-99.999 bis 99.999] einliest. Die Eingabe
    wird abgebrochen durch Eingabe einer Zahl außerhalb dieses Intervalls.

    Dann soll...

        - der Mittelwert dieser Zahlen
        - die größte dieser Zahlen
        - die den Betrag nach kleinste dieser Zahlen

    ...am Bildschirm ausgegeben werden.

    Falls die erste eingegebene Zahl bereits außerhalb des Intervalls liegt, soll
    am Bildschirm ausgegeben werden: nicht-definierte Zahlenreihe.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <climits>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    float input;
    float sum = 0.0f;
    float maxNumber = std::numeric_limits<float>::min();
    float minNumber = std::numeric_limits<float>::max();
    int counter=0;

    std::cout << "Eingabe Zahl: ";
    std::cin >> input;

    if (input >= -99.999f && input <= 99.999f)
    {
        while (input >= -99.999f && input <= 99.999f)
        {
            sum += input;
            ++counter;

            if (input > maxNumber)
                maxNumber = input;

            if (std::fabs(input) < minNumber)
                minNumber = std::fabs(input);

            std::cout << "Eingabe Zahl: ";
            std::cin >> input;
        }

        std::cout << std::endl;
        std::cout << "Mittelwert: " << sum / counter << std::endl;
        std::cout << "Gr\x94\xE1te Zahl: " << maxNumber << std::endl;
        std::cout << "Kleinste Zahl: " << minNumber << std::endl;
    }
    else
        std::cout << "nicht-definierte Zahlenreihe" << std::endl;

    std::cout << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion