/* Projekt: AufgabeSkript1_116 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, das 10000 mal würfelt und die relative Häufigkeit für jede gewürfelte Zahl ausgibt.
    
    Hinweis: Zufallszahlen zwischen 1...6 kann man so erzeugen:
    srand(time(NULL));
    zahl = rand()%6+1;

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <ctime>
#pragma endregion

#pragma region MAKROS
#define MAX 10000
#pragma endregion


#pragma region HAUPTPROGRAMM
int main(void)
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    int number5 = 0;
    int number6 = 0;

    int tempNumber = 0;

    std::srand(std::time(NULL));

    for (int i = 0; i < MAX; i++)
    {
        tempNumber = std::rand() % 6 + 1;

        switch (tempNumber)
        {
        case 1:
            ++number1;
            break;
        case 2:
            ++number2;
            break;
        case 3:
            ++number3;
            break;
        case 4:
            ++number4;
            break;
        case 5:
            ++number5;
            break;
        case 6:
            ++number6;
            break;
        }
    }
    std::cout << "Wahrscheinlichkeit Nummer 1: " << (float)number1 / (float)MAX;
    std::cout << std::endl;
    std::cout << "Wahrscheinlichkeit Nummer 2: " << (float)number2 / (float)MAX;
    std::cout << std::endl;
    std::cout << "Wahrscheinlichkeit Nummer 3: " << (float)number3 / (float)MAX;
    std::cout << std::endl;
    std::cout << "Wahrscheinlichkeit Nummer 4: " << (float)number4 / (float)MAX;
    std::cout << std::endl;
    std::cout << "Wahrscheinlichkeit Nummer 5: " << (float)number5 / (float)MAX;
    std::cout << std::endl;
    std::cout << "Wahrscheinlichkeit Nummer 6: " << (float)number6 / (float)MAX;
    std::cout << std::endl;

    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion



