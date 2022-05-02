/* Projekt Probeklausur 2 */

// Aufgabe 1: 14:11 --> 14:24 = 13 min
// Aufgabe 2: 14:48 --> 14:52 = 4 min
// Aufgabe 3: 14:54 --> 15:02 = 8 min
// Aufgabe 4: 15:03 --> 15:07 = 4 min
// Aufgabe 5: 15:11 --> 15:24 = 13 min

//Bearbeitungszeit: 13 + 4 + 8 + 4 + 13 = 42 min
//Verfügbare Zeit:                      = 90 min

/* Aufgabe 1:

    Welche Bildschirmausgabe erzeugt der Aufruf der folgenden Funktion?


    #include <iostream>

    int a = 1;
    int b = 2;
    int c = 3;

    int g(int x, int y);

    int main (void)
    {
        int a=4, b=65;
        float c=6.77;

        a = ::b % ::a;
        std::cout << (char) b << std::endl;

        b-=60;
        c = ++a;

        std::cout << g(a,b);
        std::cout << ::a << " " << a << std::endl;
        std::cout << ::b << " " << b << std::endl;
        std::cout << ::c << " " << c << std::endl;
        std::cout << a-- << std::endl;
        std::cout << a << std::endl;
        std::cout << (int)c;
        std::cout << c << std::endl;
        std::cout << a << " " << b << " " << c << std::endl;
    };

    int g(int x, int y)
    {
        int a=7;
        x++;
        std::cout << a << x << std::endl;
        return (x+y+a);
    }


*/

/* Aufgabe 2:

    Entwickeln Sie ein C++-Programm, welches von der Tastatur beliebig viele Ganzzahlen einliest.

    Die Zeichenfolge soll enden, wenn die Zahl 0 eingegeben wird. Die Zahl 0 soll für die Auswertung nicht berücksichtigt werden.

    Ihr Programm soll ausgeben:
        - die kleinste eingegebene Zahl.
        - die Anzahl der Zahlen die sowohl durch 2 als auch durch 3 teilbar sind

    Beispieleingaben:
    17
    4
    18
    6
    14
    0
    ergibt folgende Bildschirmausgabe:

    Kleinste eingegebene Zahl : 4
    Anzahl der Zahlen, die sowohl durch 2 als auch 3 teilbar sind : 2

*/

/* Aufgabe 3:

    Als magisch soll eine dreistellige Zahl gelten, wenn die Summe der ersten beiden Ziffern die dritte Ziffer ergibt.

    Einige Beispiele für magische Zahlen sind:

    123 (1+2=3)
    358 (3+5=8)
    415 (4+1=5)

    Entwickeln Sie ein C++-Programm, welches alle magischen Zahlen auflistet.

    Vorschlag zur Lösung:
    Implementieren Sie eine Funktion bool isMagical(int a, int b, int c), die prüft, ob gilt: a + b = c.
    In main() variieren Sie a, b und c jeweils von 1 bis 9 und rufen zu jedem Wert des Zahlentripels (a,b,c) 
    diese Funktion bool isMagical(int a, int b, int c)auf. Falls die Funktion true ergibt, ist a*100+b*10+c eine magische Zahl.

*/

/* Aufgabe 4:

    Entwickeln Sie für untenstehendes Programm a3.cpp eine C++-Funktion string uebersetze(string)
    die in einem vom Benutzer einzugebenden Satz, der nur aus Großbuchstaben besteht, die folgenden Ersetzungen durchführt:

        alle Zeichen „K“ werden durch „G“ ersetzt,
        alle Zeichen „P“ werden durch „B“ ersetzt und
        alle Zeichen „T“ werden durch „D“ ersetzt.

    Der durch diese Ersetzungen entstehende neue Satz soll von der Funktion zurückgegeben werden.

    Beispiel:
    Nach Eingabe des Satzes
    INFORMATIK-PRUEFUNG IN UNTERFRANKEN.
    soll das Programm am Bildschirm ausgeben:
    INFORMADIG-BRUEFUNG IN UNDERFRANGEN. .

    #include <iostream>
    #include <string>

   

    string uebersetze(string s);

    int main(void)
    {
        std::string str; 
        getline(cin, str);
        std::cout << uebersetze(str);
        
        return 0;
    }

    string uebersetze(string s)
    {
        // DIESE FUNKTION SOLLEN SIE ERSTELLEN ! //
    }

*/

/* Aufgabe 5:

    Eine der frühen indischen Formeln für die Berechnung der Kreiszahl Pi geht auf den indischen Mathematiker und Astronomen Kelallur Nilakantha Somayaji (1444-1544) zurück:

    pi = 3 + \frac{4}{3^3-3} - \frac{4}{5^3-5} + \frac{4}{7^3-7} - \frac{4}{9^3-9}

    Schreiben Sie ein C++-Programm, das Pi mit einer Genauigkeit von 5 Nachkommastellen berechnet (d.h. bis der letzte Summand in der obigen Reihe vom Betrag < 1 * 10^(-6) ist).

*/

#pragma region HEADER
#include <iostream>
#include <climits>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <string>
#pragma endregion

#pragma region GLOBALE VARIABLEN
int a = 1;
int b = 2;
int c = 3;
#pragma endregion

#pragma region KONSTANTEN
const unsigned char AE = static_cast<unsigned char>(142);
const unsigned char ae = static_cast<unsigned char>(132);
const unsigned char OE = static_cast<unsigned char>(153);
const unsigned char oe = static_cast<unsigned char>(148);
const unsigned char UE = static_cast<unsigned char>(154);
const unsigned char ue = static_cast<unsigned char>(129);
const unsigned char ss = static_cast<unsigned char>(225);
#pragma endregion

#pragma region DEKLARATION
void aufgabe1(void);
int g(int x, int y);
void aufgabe2(void);
void aufgabe3(void);
bool isMagical(int, int, int);
void aufgabe4(void);
std::string uebersetze(std::string s);
void aufgabe5(void);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    aufgabe1();
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    aufgabe2();
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    aufgabe3();
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    aufgabe4();
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    aufgabe5();
    std::cout << "-------------------------------------------------------";
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");

    return(0);
}
#pragma endregion

#pragma region DEFINITION
void aufgabe1(void)
{
/* Lösung:
    
    Inkrement ist Zuweisungsoperator!!! a++ entspricht a = a + 1!!!!!
    Globale Variablen die nicht initialisiert sind bekommen den Wert 0!!!!
    Lokale Variablen sind mit Zufallswert belegt!!!

    Globale Variablen:  int a = 1,  int b = 2,  int c = 3
    Lokales Variablen:  int a = 4,  int b = 65, float c = 6.77

    a = ::b % ::a;

    Globale Variablen:  int a = 1,  int b = 2,  int c = 3
    Lokales Variablen:  int a = 0,  int b = 65, float c = 6.77

    std::cout << (char) b << std::endl;                                     --> A

    b-=60;
    c = ++a;

    Globale Variablen:  int a = 1,  int b = 2,  int c = 3
    Lokales Variablen:  int a = 1,  int b = 5, float c = 1.0f

    std::cout << g(a,b);

              1      5
    int g(int x, int y)
    {
        int a=7;
        x++;
        std::cout << a << x << std::endl;                                   --> 72

        return (x+y+a); //2 +5 + 7 = 14
    };

    Globale Variablen:  int a = 1,  int b = 2,  int c = 3
    Lokales Variablen:  int a = 1,  int b = 5,  float c = 1.0f

    std::cout << ::a << " " << a << std::endl;                              --> 141 1
    std::cout << ::b << " " << b << std::endl;                              --> 2 5
    std::cout << ::c << " " << c << std::endl;                              --> 3 1
    std::cout << a-- << std::endl;                                          --> 1

    Globale Variablen:  int a = 1,  int b = 2,  int c = 3
    Lokales Variablen:  int a = 0,  int b = 5,  float c = 1.0f


    std::cout << a << std::endl;                                            --> 0
    std::cout << (int) c;
    std::cout << c << std::endl;                                            --> 11
    std::cout << a << " " << b << " " << c << std::endl;                    --> 0 5 1

*/

    int a = 4, b = 65;
    float c = 6.77;

    a = ::b % ::a;
    std::cout << (char)b << std::endl;

    b -= 60;
    c = ++a;

    std::cout << g(a, b);
    std::cout << ::a << " " << a << std::endl;
    std::cout << ::b << " " << b << std::endl;
    std::cout << ::c << " " << c << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << (int)c;
    std::cout << c << std::endl;
    std::cout << a << " " << b << " " << c << std::endl;
}
int g(int x, int y)
{
    int a = 7;
    x++;
    std::cout << a << x << std::endl;
    return (x + y + a);
}
void aufgabe2(void)
{
    int minNumber = std::numeric_limits<int>::max();
    int counter = 0;
    int input;

    std::cout << "Eingabe Ganzzahl: ";
    std::cin >> input;

    while (input != 0)
    {
        if (input < minNumber)
            minNumber = input;

        //std::abs damit auch negative Zahlen beachtet werden
        if (std::abs(input) % 2 == 0 && std::abs(input) % 3 == 0)
            ++counter;

        std::cout << "Eingabe Ganzzahl: ";
        std::cin >> input;
    }

    std::cout << "Kleinste eingegebene Zahl: " << minNumber;
    std::cout << std::endl;
    std::cout << "Anzahl der Zahlen, die sowohl durch 2 als auch 3 teilbar sind: " << counter;
    std::cout << std::endl;
}
void aufgabe3(void)
{
    for (int i1 = 0; i1 <= 9; i1++)
    {
        for (int i2 = 0; i2 <= 9; i2++)
        {
            for (int i3 = 0; i3 <= 9; i3++)
            {
                if (isMagical(i1, i2, i3) == true)
                {
                    std::cout << "Magische Zahl: " << i1 << i2 << i3 << "\t(" << i1 << "+" << i2 << "=" << i3 << ")";
                    std::cout << std::endl;
                }
            }
        }
    }
}
bool isMagical(int a, int b, int c)
{
    if (a + b == c)
        return(true);

    return(false);
}
void aufgabe4(void)
{
    std::cin.clear();
    std::cin.ignore();

    std::string str;
    std::cout << "String in Gro"<<ss << "buchstaben eingeben: ";
    std::getline(std::cin, str);
    std::cout << uebersetze(str);
    std::cout << std::endl;
}
std::string uebersetze(std::string s)
{

    for (std::size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'K')
            s[i] = 'G';
        if (s[i] == 'P')
            s[i] = 'B';
        if (s[i] == 'T')
            s[i] = 'D';
    }

    return(s);
}
void aufgabe5(void)
{
 /* Aufgabe 5:

    Eine der frühen indischen Formeln für die Berechnung der Kreiszahl Pi geht auf den indischen Mathematiker und Astronomen Kelallur Nilakantha Somayaji (1444-1544) zurück:

    pi = 3 + \frac{4}{3^3-3} - \frac{4}{5^3-5} + \frac{4}{7^3-7} - \frac{4}{9^3-9}

    Schreiben Sie ein C++-Programm, das Pi mit einer Genauigkeit von 5 Nachkommastellen berechnet (d.h. bis der letzte Summand in der obigen Reihe vom Betrag < 1 * 10^(-6) ist).

*/
    double pi = 0.0;
    double currentFraction = 3.0;
    int i = 3;
    int j = 1;

    pi += currentFraction;

    while (std::fabs(currentFraction) > 0.000001) // hier würde auch 1e-6 statt 0.000001 gehen
    {
        currentFraction = 4 / (pow(i, 3) - i);

        pi +=  (currentFraction * j);
        i += 2;                                            
        j *= (-1);
    }

    //Durchlauf 1:      i=3     j=1
    //Durchlauf 2:      i=5     j=-1
    //Durchlauf 3:      i=7     j=1
    //Durchlauf 4:      i=9     j=-1

    //Durchlauf 1:      currentFraction = 4 / (pow(3,3)-3)
    //Durchlauf 2:      currentFraction = 4 / (pow(5,3)-5)
    //Durchlauf 3:      currentFraction = 4 / (pow(7,3)-7)
    //Durchlauf 4:      currentFraction = 4 / (pow(9,3)-9)

    //Durchlauf 1:      pi = 3 + (currentFraction * 1)
    //Durchlauf 2:      pi = 3 + (currentFraction * 1) + (currentFraction * 1)
    //Durchlauf 3:      pi = 3 + (currentFraction * 1) + (currentFraction * 1) + (currentFraction * 1)
    //Durchlauf 4:      pi = 3 + (currentFraction * 1) + (currentFraction * -1) + (currentFraction * 1) + (currentFraction * -1)

    std::streamsize ss = std::cout.precision();

    std::cout << std::fixed; //Angabe in Precision bezieht sich ausschließlich auf Nachkommastellen
    std::cout.precision(3);

    std::cout << "pi = " << pi;
    std::cout << std::endl;

    std::cout << std::defaultfloat; //Angabe in Precision bezieht sich wieder auf Vor- und Nachkommastellen (DEFAULT)
    std::cout.precision(ss); //Precision auf Anfangwert setzen

    std::cout << "pi = " << pi;
    std::cout << std::endl;
}
#pragma endregion