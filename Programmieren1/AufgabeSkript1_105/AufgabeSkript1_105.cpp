/* Projekt AufgabeSkript1_105 */

/* Aufgabe:

   Schreiben Sie eine C++-Funktion, welche die Notenskala des ECTS-Systems in die übliche 1.0 bis 5.0
   Notenskala umsetzt.

   Schreiben Sie eine C++-Funktion, welche das 0.3-Abstufungssystem in die ETCS-Note umsetzt.

   Es gilt:

   ETCS-Note            Bereich
   A                    1.0 - 1.5
   B                    1.6 - 2.0
   C                    2.1 - 3.0
   D                    3.1 - 3.5
   E                    3.6 - 4.0
   F                    4.1 - 5.0

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION: FUNKTIONEN
void vonEtcsZUAbstufung(char);
void vonAbstufungZuETCS(float);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    char eingabeETCS;
    float eingabeAbstufung;


    std::cout << "Eingabe ETCS-Note: ";
    std::cin >> eingabeETCS;

    vonEtcsZUAbstufung(eingabeETCS);

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Eingabe Abstufungsnote: ";
    std::cin >> eingabeAbstufung;

    vonAbstufungZuETCS(eingabeAbstufung);

    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION: FUNKTIONEN
/// <summary>
/// Funktion, welche die übergebene ETCS-Note in ein Abstufungssystem überführt.
/// </summary>
/// <param name="input"></param>
void vonEtcsZUAbstufung(char input)
{
    switch ((int)input)
    {
    case 65://A
        std::cout << "Abstufungsnote 1.0 - 1.5";
        break;
    case 66://B
        std::cout << "Abstufungsnote 1.6 - 2.0";
        break;
    case 67://C
        std::cout << "Abstufungsnote 2.1 - 3.0";
        break;
    case 68://D
        std::cout << "Abstufungsnote 3.1 - 3.5";
        break;
    case 69://E
        std::cout << "Abstufungsnote 3.6 - 4.0";
        break;
    case 70://F
        std::cout << "Abstufungsnote 4.1 - 5.0";
        break;
    default:
        std::cout << "Falsche Eingabe!";
        break;
    }
}
/// <summary>
/// Funktion, welche die übergebene Abstufungsnote in eine ETCS-Note überführt.
/// </summary>
/// <param name="input"></param>
void vonAbstufungZuETCS(float input)
{
    int inputChanged = (int)(input * 10);

    switch (inputChanged)
    {
    case 10:
        std::cout << "ETCS-Note A";
        break;
    case 13:
        std::cout << "ETCS-Note A";
        break;
    case 17:
        std::cout << "ETCS-Note B";
        break;
    case 20:
        std::cout << "ETCS-Note B";
        break;
    case 23:
        std::cout << "ETCS-Note C";
        break;
    case 27:
        std::cout << "ETCS-Note C";
        break;
    case 30:
        std::cout << "ETCS-Note C";
        break;
    case 33:
        std::cout << "ETCS-Note D";
        break;
    case 37:
        std::cout << "ETCS-Note E";
        break;
    case 40:
        std::cout << "ETCS-Note E";
        break;
    case 43:
        std::cout << "ETCS-Note F";
        break;
    case 47:
        std::cout << "ETCS-Note F";
        break;
    case 50:
        std::cout << "ETCS-Note F";
        break;
    default:
        std::cout << "Falsche Eingabe!";
        break;
    }
}
#pragma endregion