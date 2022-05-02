/* Projekt: Übung1_1 */

/* Aufgabe:

    a) Erstellen Sie ein C++-Programm, welches das Volumen eines Würfels berechnet.
    b) Erstellen Sie ein C++-Programm, welches den Flächeninhalt eines Kreises berechnet.
    c) Erstellen Sie ein C++-Programm, welches das Volumen eines Zylinders berechnet.
        - Verwenden Sie die bereits implementierte Funktionalität aus b)

*/

#include <iostream>
#include <cstdlib>

const float pi = 3.14f;

const unsigned char AE = (unsigned char)(142);
const unsigned char ae = (unsigned char)(132);
const unsigned char OE = (unsigned char)(153);
const unsigned char oe = (unsigned char)(148);
const unsigned char UE = (unsigned char)(154);
const unsigned char ue = (unsigned char)(129);
const unsigned char ss = (unsigned char)(225);

/* Für Escapesequenzen:

    Zeichen     Hex    Okt
    ========================
    'Ä'         8E     216
    'ä'         84     204
    'Ö'         99     231
    'ö'         94     224
    'Ü'         9A     232
    'ü'         81     201
    'ß'         E1     341 

*/

float calculateVolumeCube(float edgeLength);
float calculateAreaOfCircle(float radius);
float calculateVolumeCylinder(float areaOfCircle, float height);

int main(void)
{
    float edgeLength = 0.0f;
    float radius = 0.0f;
    float height = 0.0f;
    float volumeCube = 0.0f;
    float areaOfCircle = 0.0f;
    float volumeCylinder = 0.0f;

    std::cout << "Eingabe Kantenl" << ae << "nge:\t";
    std::cin >> edgeLength;
    std::cout << "Eingabe Radius:\t\t";
    std::cin >> radius;
    std::cout << "Eingabe H\x94he:\t\t";
    std::cin >> height;
    std::cout << std::endl;
    std::cout << "----------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    volumeCube = calculateVolumeCube(edgeLength);
    std::cout << "Volumen W\x81rfel:\t\t" << volumeCube << std::endl;
    areaOfCircle = calculateAreaOfCircle(radius);
    std::cout << "Kreisfl\x84 \bche:\t\t" << areaOfCircle << std::endl;
    volumeCylinder = calculateVolumeCylinder(areaOfCircle, height);
    std::cout << "Volumen Zylinder:\t" << volumeCylinder << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::system("pause");

    return(0);
}

/// <summary>
/// V_Cube = edgeLength^3
/// </summary>
/// <param name="edgeLength"></param>
/// <returns></returns>
float calculateVolumeCube(float edgeLength)
{
    return(edgeLength * edgeLength * edgeLength);
}
/// <summary>
/// A_Circle = pi * radius^2
/// </summary>
/// <param name="radius"></param>
/// <returns></returns>
float calculateAreaOfCircle(float radius)
{
    return(pi * radius * radius);
}
/// <summary>
/// V_Cylinder = A_Circle * height
/// </summary>
/// <param name="radius"></param>
/// <param name="height"></param>
/// <returns></returns>
float calculateVolumeCylinder(float areaOfCircle, float height)
{
    return(areaOfCircle * height);
}
