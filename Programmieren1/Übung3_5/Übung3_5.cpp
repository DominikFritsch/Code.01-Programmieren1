/* Projekt: Übung3_5 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches von der Tastatur beliebig viele reelle Zahlen aus
    dem Intervall [−99, 999; +99, 999] einliest. Die Eingabe wird abgebrochen durch Eingabe
    einer Zahl außerhalb dieses Intervalls. 
    
    Falls die erste eingegebene Zahl bereits außerhalb des Intervalls liegt, soll am
    Bildschirm ausgegeben werden: not in interval. 

    Dann soll der Mittelwert dieser Zahlen, die größte dieser Zahlen und die, dem Betrag nach, 
    kleinste dieser Zahlen am Bildschirm ausgegeben werden. 
    


*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
double myAbs(double);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    
    double input = 0.0;
    double maxInputValue = 0.0f;
    double minInputValue = DBL_MAX;
    double sum = 0.0f;
    bool isFirstNumber = true;

    int inputCounter = 0;

    do
    {
        std::cout << "Eingabe [-99,999 bis 99,999]: ";
        std::cin >> input;


        if ((input >= -99.999 && input <= 99.999))
        {
            //Gültiger Wertebereich
            if (input > maxInputValue) maxInputValue = input;

            if (abs(input) < minInputValue) minInputValue = abs(input);

            sum += input;
            ++inputCounter;
        }
        else
        {
            //Ungültiger Wertebereich
            if (isFirstNumber == true)
            {
                std::cout << "Die eingegebene Zahl liegt nicht im Intervall.";
                std::cout << std::endl;
                input = 0.0;
            }
        }

        isFirstNumber = false;

    } while ((input >= -99.999 && input <= 99.999));


    if (inputCounter > 0)
    {
        std::cout << std::endl;
        std::cout << "Mittelwert: " << sum / inputCounter;
        std::cout << std::endl;
        std::cout << "Gr\x94\xE1te eingegebene Zahl: " << maxInputValue;
        std::cout << std::endl;
        std::cout << "Kleinste den Betrag nach eigegebene Zahl: " << minInputValue;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche den Absolutwert/Betrag der übergebenen Zahl zurückgibt.
/// </summary>
/// <param name="a"></param>
/// <returns></returns>
double myAbs(double a)
{
    if (a < 0) return (a * (-1));
    else return (a);
}
#pragma endregion