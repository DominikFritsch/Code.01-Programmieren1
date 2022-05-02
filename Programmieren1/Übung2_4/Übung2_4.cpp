/* Projekt: Übung2_4 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm, welches die Länderkennzeichen von Pkws in deren
    Langform umsetzt. Unter http://www.laender-kennzeichen.de finden Sie eine Übersicht
    der Länderkennzeichen, aus der Sie Kennzeichen auswählen sollen.

    Beispiel:
    Benutzereingabe: D, Ausgabe: Deutschland
    Benutzereingabe: A, Ausgabe: Österreich
    Benutzereingabe: B, Ausgabe: Belgien

    Falls kein gültiges Länderkennzeichen eingegeben wurde, soll eine Fehlermeldung ausgegeben
    werden. Bitte beschränken Sie sich auf Länderkennzeichen, die aus einem Buchstaben
    bestehen!

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <string>
#pragma endregion

#pragma region DEKLARATION
std::string getCountry(char);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    char input;

    do
    {
        std::cout << "Eingabe L\x84nderkennzeichen: ";
        std::cin >> input;

        if (((int)input < 65) || ((int)input > 90))
        {
            std::cout << "Falsche Eingabe!";
            std::cout << std::endl;
        }

    } while ( ((int)input < 65) || ((int)input > 90) );

    std::cout << "Benutzereingabe: " << input << ", Ausgabe: " << getCountry(input);
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
/// <summary>
/// Funktion, welche das übergebene Länderkennzeichen erkennt und das jeweilige Land zurückgibt.
/// </summary>
/// <param name="input"></param>
/// <returns></returns>
std::string getCountry(char input)
{
    std::string result;
    switch ((int)input)
    {
    case 65:
        result = "\x99sterreich";
        break;
    case 66:
        result = "Belgien";
        break;
    case 67:
        result = "Kuba";
        break;
    case 68:
        result = "Deutschland";
        break;
    case 69:
        result = "Spanien";
        break;
    case 70:
        result = "Frankreich";
        break;
    case 71:
        result = "Gabun";
        break;
    case 72:
        result = "Hong Kong";
        break;
    case 73:
        result = "Italien";
        break;
    case 74:
        result = "Japan";
        break;
    case 75:
        result = "Kambodscha";
        break;
    case 76:
        result = "Luxemburg";
        break;
    case 77:
        result = "Malta";
        break;
    case 78:
        result = "Norwegen";
        break;
    case 79:
        result = "Oman";
        break;
    case 80:
        result = "Portugal";
        break;
    case 81:
        result = "Katar";
        break;
    case 82:
        result = "Argentinien";
        break;
    case 83:
        result = "Schweden";
        break;
    case 84:
        result = "Thailand";
        break;
    case 85:
        result = "Ukraine";
        break;
    case 86:
        result = "Vatikanstadt";
        break;
    case 87:
        result = "Gambia";
        break;
    case 89:
        result = "Jemen";
        break;
    case 90:
        result = "Sambia";
        break;
    default:
        result = "Nicht bekannt.";
        break;
    }

    return(result);
}
#pragma endregion
