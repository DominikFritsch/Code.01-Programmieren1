/* Projekt Probeklausur 1 */

/* Aufgabe 1:

    Welche Bildschirmausgabe erzeugt der Aufruf der folgenden Funktion?

    void aufgabe1(void)
    {
        int a=1, b=2, c=3, d=65;
        bool e=1;
        std::cout << a++ <<' '<< --b <<' '<< (c+=3) <<' '<<(char) d << std::endl;
        std::cout << a << ' ' << b << ' ' <<(char)(d+25)<< std::endl;
        a *= 4;
        b *= 3;
        c=!c;
        std::cout << std::boolalpha;
        std::cout << e << std::endl;
        std::cout << a << ' ' << b << ' ' << c << std::endl;
        a = b = c = 1;
        std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;
        while (a>2)
        {
            cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;
            a--;
        }
    }

*/

/* Aufgabe 2:

    Entwickeln Sie ein C++-Programm, welches von der Tastatur beliebig viele Ganzzahlen einliest.

    Die Zeichenfolge soll enden, wenn die Zahl -99 eingegeben wird. Die Zahl -99 soll für die Auswertung nicht berücksichtigt werden.
    Ihr Programm soll ausgeben:
        - die größte eingegebene Zahl
        - die Anzahl der eingegebenen Zahlen, die auf die Ziffer 1 enden.

    Beispieleingaben:
    2
    125
    101
    31
    73
    21
    -99

    ...ergibt folgende Bildschirmausgabe:

    Groesste eingegebene Zahl : 125
    Anzahl der Zahlen mit Endziffer 1 : 3   

*/

/* Aufgabe 3:

    Die Fibonacci-Folge ist eine unendliche Folge von Zahlen (den Fibonacci-Zahlen fn), bei der sich die jeweils folgende Zahl durch Addition ihrer beiden vorherigen Zahlen ergibt,
    d.h. die Konstruktionsvorschrift der Folge lautet
    fn = fn-2 + fn-1 für n ? 2 mit den Anfangswerten f0=0 und f1=1.

    Die ersten Glieder der Fibonacci-Folge lauten also: 0, 1, 1, 2, 3, 5, 8, 13, …

    Erstellen Sie ein C++-Programm, das die Fibonacci-Zahlen von n=2 bis n=10 errechnet und in folgender Form auf dem Bildschirm ausgibt:

    n=2, f(2)=1
    n=3, f(3)=2
    n=4, f(4)=3
    n=5, f(5)=5
    n=6, f(6)=8
    ...
    n=10, f(10)=55

*/

/* Aufgabe 4:

    Schreiben Sie ein C++-Programm, welches eine vom Benutzer eingegebene Binärzahl in die entsprechende Dezimalzahl umwandelt.

    Beispiel:

    Eingabe: 10011 Ausgabe: 19
    Hinweise:
        - Die Dezimaldarstellung einer Binärzahl erhält man durch Summation aufsteigender Zweierpotenzen, z.B. 10011 ? 1?20+1?21+0?22+0?23+1?24=19
        - Sie können die Potenzfunktion verwenden, die in der Bibliothek <cmath> zur Verfügung steht. Die Syntax dieser Funktion lautet
          pow(int x, int y); \\ berechnet ????????
        - Eine einfache Möglichkeit, das Programm zu implementieren, ist es, wenn die Eingabe als String erfolgt und Sie den String zeichenweise analysieren. 
          Natürlich gibt es auch andere Möglichkeiten der Implementierung.

*/

/* Aufgabe 5:

    Finden Sie die drei Fehler in folgendem C++-Code, der das kleinste Element aus dem dreikomponentigen Vektor v={1,8,27} finden soll.

    #include <iostream>
    #include <vector>
    using namespace std;
    
    int main(void)
    {
        float min;
        std::vector <float> v(3);
        for (int i=1; i<=3; i++)
            v[i]=i^3;
        for (int i=1; i<=3; i++)
            if (v[i]<min)
               min=v[i];

        std::cout << min << std::endl;

        return(0);
    }

*/

#pragma region HEADER
#include <iostream>
#include <climits>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <string>
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
void aufgabe2(void);
void aufgabe3(void);
void aufgabe4(void);
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
    int a = 1, b = 2, c = 3, d = 65;
    bool e = 1;
    std::cout << a++ << ' ' << --b << ' ' << (c += 3) << ' ' << (char)d << std::endl;
    std::cout << a << ' ' << b << ' ' << (char)(d + 25) << std::endl;
    a *= 4;
    b *= 3;
    c = !c;
    std::cout << std::boolalpha;
    std::cout << std::noboolalpha;
    std::cout << std::hex;
    std::cout << e << std::endl;
    std::cout << a << ' ' << b << ' ' << c << std::endl;
    a = b = c = 1;
    std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;
    while (a > 2)
    {
        std::cout << a << ' ' << b << ' ' << c << ' ' << d << std::endl;
        a--;
    }
}
void aufgabe2(void)
{
    int input;
    int maxNumber = INT_MIN;
    int counter = 0;

    std::cout << "Eingabe Zahl: ";
    std::cin >> input;

    while (input != -99)
    {
        if (maxNumber < input)
            maxNumber = input;

        if (input % 10 == 1)
            counter++;

        std::cout << "Eingabe Zahl: ";
        std::cin >> input;

    }

    std::cout << "Größte Zahl: " << maxNumber << std::endl;
    std::cout << "Anzahl: " << counter << std::endl;
}
void aufgabe3(void)
{
    int cN = 0;
    int fN = 0;
    int sN = 1;

    for (std::size_t i = 2; i <= 10; i++)
    {
        cN = fN + sN;
        std::cout << "n=" << i << ", f(" << i << ")=" << cN;
        std::cout << std::endl;

        //f_2 = f_0 + f_1;
        //f_3 = f_1 + f_2;
        //fib0 = fib1
        //fib1 = fibn

        fN = sN;
        sN = cN;
    }
}
void aufgabe4(void)
{
    std::string input;
    int sum = 0;
    int counter = 0;

    std::cout << "Eingabe Bin" << ae << "rzahl: ";
    std::cin >> input;
    //10011
    // 1 * 2^0
    for (int i = input.length() - 1; i >= 0; i--)
    {
        if (input[i] == '1')
            sum += (pow(2, counter));
        counter++;
    }

    std::cout << "Ergebnis: " << sum;
    std::cout << std::endl;

}
void aufgabe5(void)
{
    float min = std::numeric_limits<float>::max();
    std::vector <float> v(3);


    for (int i = 1; i <= 3; i++)
        v[i - 1] = i * i * i;

    for (int i = 1; i <= 3; i++)
        if (v[i - 1] < min)
            min = v[i - 1];

    std::cout << "Kleinstes Element: " << min << std::endl;
}
#pragma endregion