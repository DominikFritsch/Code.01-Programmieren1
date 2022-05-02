/* Projekt: Übung4_4 */

/* Aufgabe:

    Schreiben Sie zwei C++ Funktionen swap1() und swap2(), welche zwei int Werte entgegennehmen und
    diese vertauschen. Der Tausch der beiden Parameter soll auch für den Aufrufer der Funktion
    sichtbar sein.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void swap1(int&, int&);
void swap2(int*, int*);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int a = 5;
    int b = 3;

    std::cout << "a = " << a << " | b = " << b;
    std::cout << std::endl;

    swap1(a, b);

    std::cout << "a = " << a << " | b = " << b;
    std::cout << std::endl;

    swap2(&a,&b);

    std::cout << "a = " << a << " | b = " << b;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
void swap1(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap2(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#pragma endregion
