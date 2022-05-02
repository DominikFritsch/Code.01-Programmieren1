/* Projekt AufgabeSkript1_99 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short i;
        cout << "Bitte eine positive, ganze Zahl eingeben: ";
        cin >> i;

        if((i%2) == 1) cout << i << " ist ungerade" << endl;
        else cout << i << " ist gerade" << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    Eingabe = 6 (gerade Zahl)
    -------------------------------------------
    6 ist gerade
    -------------------------------------------

    Eingabe = 5 (ungerade Zahl)
    -------------------------------------------
    5 ist ungerade
    -------------------------------------------

*/

#include <iostream>
using namespace std;

int main(void)
{
    short i;
    cout << "Bitte eine positive, ganze Zahl eingeben: ";
    cin >> i;

    if ((i % 2) == 1) cout << i << " ist ungerade" << endl;
    else cout << i << " ist gerade" << endl;

    return(0);
}
