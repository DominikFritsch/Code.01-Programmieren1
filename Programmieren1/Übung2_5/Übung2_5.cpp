/* Projekt: Übung2_5 */

/* Aufgabe:

    Schreiben Sie eine Funktion, welche alle geraden Zahlen von 1 bis 100 aufsteigend
    ausgibt. Schreiben Sie eine Funktion, welche alle ungeraden Zahlen von 100
    bis 1 absteigend ausgibt. Realisieren Sie die beiden Funktionen jeweils mit einer do-while,
    while und for Schleife. Warum ist die range-for Schleife in diesem Fall eher ungeeignet?

*/

/* Antwort:

    Die range-for Schleife dient zum bequemen iterieren einer zusammengesetzten Datenstruktur, wie beispielsweise 
    ein Array oder ein Container. Da wir in diesem Fall keine
    zusammengesetzte Datenstruktur haben, ist dieser Schleifentyp eher ungeeignet.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
void evenDoWhile(void);
void evenWhile(void);
void evenFor(void);
void oddDoWhile(void);
void oddWhile(void);
void oddFor(void);
#pragma endregion

#pragma region HAUPTHAUPTPROGRAMM
int main(void)
{

    evenDoWhile();
    evenWhile();
    evenFor();
    oddDoWhile();
    oddWhile();
    oddFor();

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche die geraden Zahlen zwischen 1 und 100 aufsteigend ausgibt (do-while-Schleife).
/// </summary>
/// <param name=""></param>
void evenDoWhile(void)
{
    std::cout << "---------- Gerade Zahlen do-while-Schleife ----------";
    std::cout << std::endl;

    int i = 0;

    do
    {
        i += 2;
        std::cout << i << " ";

    } while (i < 100);

    std::cout << std::endl;
    std::cout << std::endl;
}
/// <summary>
/// Funktion, welche die geraden Zahlen zwischen 1 und 100 aufsteigend ausgibt (while-Schleife).
/// </summary>
/// <param name=""></param>
void evenWhile(void)
{
    std::cout << "---------- Gerade Zahlen while-Schleife ----------";
    std::cout << std::endl;

    int i = 0;

    while (i < 100)
    {
        i += 2;
        std::cout << i << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;
}
/// <summary>
/// Funktion, welche die geraden Zahlen zwischen 1 und 100 aufsteigend ausgibt (for-Schleife).
/// </summary>
/// <param name=""></param>
void evenFor(void)
{
    std::cout << "---------- Gerade Zahlen for-Schleife ----------";
    std::cout << std::endl;

    for (int i = 2; i <= 100; i+=2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;
}
/// <summary>
/// Funktion, welche die ungeraden Zahlen zwischen 1 und 100 absteigend ausgibt (do-while-Schleife).
/// </summary>
/// <param name=""></param>
void oddDoWhile(void)
{
    std::cout << "---------- Ungerade Zahlen do-while-Schleife ----------";
    std::cout << std::endl;

    int i = 99;
    do
    {
        std::cout << i << " ";
        i -= 2;

    } while (i > 0);

    std::cout << std::endl;
    std::cout << std::endl;
}
/// <summary>
/// Funktion, welche die ungeraden Zahlen zwischen 1 und 100 absteigend ausgibt (while-Schleife).
/// </summary>
/// <param name=""></param>
void oddWhile(void)
{
    std::cout << "---------- Ungerade Zahlen while-Schleife ----------";
    std::cout << std::endl;

    int i = 99;

    while (i >0 )
    {
        std::cout << i << " ";
        i -= 2;
    }

    std::cout << std::endl;
    std::cout << std::endl;
}
/// <summary>
/// Funktion, welche die ungeraden Zahlen zwischen 1 und 100 absteigend ausgibt (for-Schleife).
/// </summary>
/// <param name=""></param>
void oddFor(void)
{
    std::cout << "---------- Ungerade Zahlen for-Schleife ----------";
    std::cout << std::endl;

    for (int i = 99; i > 0; i -= 2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    std::cout << std::endl;
}
#pragma endregion




