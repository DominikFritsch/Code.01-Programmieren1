/* Projekt: AufgabeSkript1_57 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, welches die Ausgabegenauigkeit von einem float oder double Wert spezifiziert.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    float a = 12.3456f;                             //--> 12.3456
    float b = 1.234e-5f;                            //--> 0.00001234
    float c = 0.00001234f;
    double d = 12.3445567878123234;                 //--> 12.3445567878123234
    double e = 1.2347893463461223424e-10;           //--> 0.00000000012347893463461223424
    double f = 0.00000000012347893463461223424;

    std::cout << "Eine float-Variable hat einen Speicherbedarf von: " << sizeof(float) << " Bytes.";
    std::cout << std::endl;
    std::cout << "Eine double-Variable hat einen Speicherbedarf von: " << sizeof(double) << " Bytes.";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout.precision(3); //Ausgabegenauigkeit spezifizieren
    std::cout << "Variable a:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << a << "\t|\t" << "Erwartet: 12.3";
    std::cout << std::endl;
    std::cout << "Variable b:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << b << "\t|\t" << "Erwartet: 1.23e-5";
    std::cout << std::endl;
    std::cout << "Variable c:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << c << "\t|\t" << "Erwartet: 1.23e-5"; //NICHT 0.00!
    std::cout << std::endl;
    std::cout << "Variable d:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << d << "\t|\t" << "Erwartet: 12.3";
    std::cout << std::endl;
    std::cout << "Variable e:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << e << "\t|\t" << "Erwartet: 1.23e-10";
    std::cout << std::endl;
    std::cout << "Variable f:";
    std::cout << std::endl;
    std::cout << "Tats\x84 \bchlich: " << f << "\t|\t" << "Erwartet: 1.23e-10"; //NICHT 0.00!
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion



