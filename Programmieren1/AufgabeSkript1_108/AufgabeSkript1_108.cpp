/* Projekt AufgabeSkript1_108 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short a, b, ergebnis = 0;
        cout << "a: ";
        cin>> a;
        cout << "b: ";
        cin >> b;
        cout << a << " div " << b << " = ";

        while(a>=b)
        {
            a = a-b;
            ergebnis = ergebnis +1 ;
        }
        cout << ergebnis << " Rest " << a << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm, wenn a = 10 und b = 2?

    Was macht dieses Programm?

*/

/* Antwort:

   zu: Was erscheint bei Ablauf dieses Programms am Bildschirm, wenn a = 10 und b = 2?

   a    = 10 -2  = 8
   ergebnis = 1
   a    = 8 - 2  = 6
   ergebnis = 2
   a    = 6 - 2  = 4
   ergebnis = 3
   a    = 4 - 2  = 2
   ergebnis = 4
   a    = 2 - 2  = 0
   ergebnis = 5

   a: 10
   b: 2

   a div b = 5 Rest 0


   zu: Was macht dieses Programm?
   Das Programm gibt den Quotient zweier eingegebener Zahlen sowie den entstandenen Rest (Modulo-Operation) aus.

*/

#include <iostream>
using namespace std;

int main(void)
{
    short a, b, ergebnis = 0;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << a << " div " << b << " = ";

    while (a >= b)
    {
        a = a - b;
        ergebnis = ergebnis + 1;
    }
    cout << ergebnis << " Rest " << a << endl;

    return(0);
}
