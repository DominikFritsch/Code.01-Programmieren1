/* Projekt: Übung1_3 */

/* Aufgabe:

    Schreiben Sie ein C++-Programm, dass eine beliebige Adresse bestehend aus Straße, Hausnummer, Postleitzahl
    und Ort einliest. Lesen Sie die Adresse:

    a) Bestandteil für Bestandteil ein, d. h. erst die Straße, dann die Hausnummer, dann die Postleitzahl und
       zu guter Letzt den Ort. Speichern Sie die Bestandteile in geeigneten Variablen.
    b) Zeile für Zeile ein, d. h. Straße und Hausnummer (Zeile 1), PLZ und Ort (Zeile 2). Speichern Sie die Zeilen
       in geeigneten Variablen ab.

*/

#include <iostream>
#include <cstdlib>
#include <string>

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

void taskA(void);
void taskB1(void);
void taskB2(void);
void printAddress1(std::string, int, int, std::string);
void printAddress2(std::string, std::string);

int main(void)
{
    taskA();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    taskB1();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;
    taskB2();
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "-------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}

void taskA(void)
{
    std::string street = "";
    int houseNumber = 0;
    int postcode = 0;
    std::string location = "";

    std::cout << "Eingabe Stra\xE1 \be:\t";
    std::cin >> street;
    std::cout << "Hausnummer:\t";
    std::cin >> houseNumber;
    std::cout << "Postleitzahl:\t";
    std::cin >> postcode;
    std::cout << "Ort:\t\t";
    std::cin >> location;
    std::cout << std::endl;

    printAddress1(street, houseNumber, postcode, location);
}

void taskB1(void)
{
    std::string street = "";
    int houseNumber = 0;
    int postcode = 0;
    std::string location = "";

    std::cout << "Eingabe Stra\xE1 \be und Hausnummer:\t";
    std::cin >> street >> houseNumber;
    std::cout << "Eingabe Postleitzahl und Ort:\t";
    std::cin >> postcode >> location;
    std::cout << std::endl;

    printAddress1(street, houseNumber, postcode, location);
}

void taskB2(void)
{
    std::string inputRaw1 = "";
    std::string inputRaw2 = "";

    std::cin.ignore();

    std::cout << "Eingabe Stra\xE1 \be und Hausnummer:\t";
    std::getline(std::cin, inputRaw1);
    std::cout << "Eingabe Postleitzahl und Ort:\t";
    std::getline(std::cin, inputRaw2);
    std::cout << std::endl;

    printAddress2(inputRaw1, inputRaw2);
}

void printAddress1(std::string street, int houseNumber, int postcode, std::string location)
{
    std::cout << "Adresse:";
    std::cout << std::endl;
    std::cout << street << " " << houseNumber;
    std::cout << std::endl;
    std::cout << postcode << " " << location;
}

void printAddress2(std::string raw1, std::string raw2)
{
    std::cout << "Adresse:";
    std::cout << std::endl;
    std::cout << raw1;
    std::cout << std::endl;
    std::cout << raw2;
}
