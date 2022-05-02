/* Projekt AufgabeSkript1_102 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short i;
        cout << "Positive, ganze Zahl eingeben: ";
        cin >> i;
        if(i >= 0)
        {
            if((i%2) == 1) cout << i << " ist ungerade" << endl;
            else cout << i << " ist gerade" << endl;
        }
        else cout << "Eingegebene Zahl war nicht positiv!" << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    Das Programm prüft zunächst, ob die eingegebene Zahl positiv und ungleich 0 ist. Falls ja, wird geprüft,
    ob die Zahl gerade oder underade ist.

    Eingabe = 5 (positive Ganzzahl)
    ------------------------------------------------
    5 ist ungerade

    Eingabe = 6 (positive Ganzzahl)
    ------------------------------------------------
    6 ist gerade

    Eingabe = 0 (positive Ganzzahl)
    ------------------------------------------------
    0 ist gerade

    Eingabe = -1 (negative Ganzzahl)
    ------------------------------------------------
    Eingegebene Zahl war nicht positiv!

*/

#include <iostream>
using namespace std;

int main(void)
{
    short i;
    cout << "Positive, ganze Zahl eingeben: ";
    cin >> i;
    if (i >= 0)
    {
        if ((i % 2) == 1) cout << i << " ist ungerade" << endl;
        else cout << i << " ist gerade" << endl;
    }
    else cout << "Eingegebene Zahl war nicht positiv!" << endl;

    return(0);
}
