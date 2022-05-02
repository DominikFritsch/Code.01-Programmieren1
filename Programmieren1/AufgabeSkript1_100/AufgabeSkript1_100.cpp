/* Projekt AufgabeSkript1_100 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short a, b;
        cout << "Eingabe a: ";
        cin >> a;
        cout << "Eingabe b: ";
        cin >> b;

        if(a = b) cout << "a ist gleich b";
        else cout << "a ist ungleich b";

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    Es wird "a ist gleich b" ausgegeben solange b nicht 0 ist, da in der if-Abfrage der
    Zuweisungsoperator (=) anstelle des Gleichheitsoperators (==) verwendet wurde.

    Geprüft wird if(a), wobei der Wert von a der Eingabe von b entspricht.

    Eingabe für b:
    b = 0   -->     a ist ungleich b,   da die 0 logisch falsch ist
    b > 0   -->     a ist gleich b,     da positive Ganzzahlen logisch wahr sind
    b < 0   -->     a ist gleich b,     da negative Ganzzahlen logisch wahr sind

*/

#include <iostream>
using namespace std;

int main(void)
{
    short a, b;
    cout << "Eingabe a: ";
    cin >> a;
    cout << "Eingabe b: ";
    cin >> b;

    if (a = b) cout << "a ist gleich b";
    else cout << "a ist ungleich b";

    return(0);
}