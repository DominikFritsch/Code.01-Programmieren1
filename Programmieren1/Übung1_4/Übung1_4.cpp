/* Projekt: Übung1_4 */

/* Aufgabe:

    Lesen sie zwei int-Werte von der Tastatur ein, vertauschen Sie deren Inhalt und geben Sie diese Werte
    wieder aus.

*/

#include <cstdlib>
#include <iostream>

void swapInt(int* inputA, int* inputB);


int main(void)
{
    int inputA;
    int inputB;

    std::cout << "Eingabe int-Wert 1:\t";
    std::cin >> inputA;
    std::cout << "Eingabe int-Wert 2:\t";
    std::cin >> inputB;
    std::cout << std::endl;
    std::cout << "Eingabe A:\t" << inputA;
    std::cout << std::endl;
    std::cout << "Eingabe B:\t" << inputB;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "---------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    swapInt(&inputA, &inputB);

    std::cout << "Ausgabe A:\t" << inputA;
    std::cout << std::endl;
    std::cout << "Ausgabe B:\t" << inputB;
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}

/// <summary>
/// Call by Reference : Es wird keine lokale Kopie erstellt, sondern die Speicheradresse übergeben.
/// </summary>
/// <param name="inputA"></param>
/// <param name="inputB"></param>
void swapInt(int* inputA, int* inputB)
{
    int temp = *inputA;
    *inputA = *inputB;
    *inputB = temp;
}