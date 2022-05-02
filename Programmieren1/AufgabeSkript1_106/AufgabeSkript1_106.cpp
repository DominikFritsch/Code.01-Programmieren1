/* Projekt AufgabeSkript1_106 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        bool x;
        int a;
        cout << "Bitte Ganzzahl eingeben: ";
        cin >> a;

        if(a) x = true;
        else x = false;

        switch(x)
        {
            case true: cout << "wahr" << endl; break;
            case false: cout << "falsch" << endl; break;

        }

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    Eingabe = 0
    ------------------------------------------------------
    falsch

    Eingabe != 0
    ------------------------------------------------------
    wahr

    ... da negative und positive Ganzzahl logisch wahr sind und die 0 logisch falsch ist.

*/

#include <iostream>
using namespace std;

int main(void)
{
    bool x;
    int a;
    cout << "Bitte Ganzzahl eingeben: ";
    cin >> a;

    if (a) x = true;
    else x = false;

    switch (x)
    {
    case true: cout << "wahr" << endl; break;
    case false: cout << "falsch" << endl; break;

    }

    return(0);
}
