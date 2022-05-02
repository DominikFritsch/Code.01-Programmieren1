/* Projekt: Übung2_8 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches den Mittelwert einer Folge von int Zahlen
    bestimmt. Die Zahlenfolge soll mit der Zahl 0 enden.
    
    Diese Zahl ist bei der Mittelwertbildung nicht zu berücksichtigen. 
    Gehen Sie davon aus, dass mindestens eine Zahl ungleich 0 eingegeben wird.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int input;
    int counter = 0;
    double sum = 0;

    do
    {
        std::cout << "Eingabe Zahl: ";
        std::cin >> input;

        if (input != 0)
        {
            ++counter;
            sum += input;
        }

    } while (input !=0);

    std::cout << std::endl;
    if (counter == 0) std::cout << "Mittelwert: Nicht definiert!";
    else std::cout << "Mittelwert: " << (sum / counter);
 
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion