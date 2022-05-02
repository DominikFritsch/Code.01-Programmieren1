/* Projekt AufgabeSkript1_104 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short note;
        cout << "Schul-Notenwert eingeben: ";
        cin >> note;

        switch(note)
        {
            case 1: cout << "sehr gut" << endl; break;
            case 2: cout << "gut" << endl; break;
            case 3: cout << "befriedigend" << endl; break;
            case 4: cout << "ausreichend" << endl; break;
            case 5: cout << "mangelhaft" << endl; break;
            case 6: cout << "ungenuegend" << endl; break;
            default: cout << "Phantasienote" << endl; break;
        }

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    Eingabe: 1
    ------------------------------------------
    sehr gut

    Eingabe: 2
    ------------------------------------------
    gut

    Eingabe: 3
    ------------------------------------------
    befriedigend

    Eingabe: 4
    ------------------------------------------
    ausreichend

    Eingabe: 5
    ------------------------------------------
    mangelhaft

    Eingabe: 6
    ------------------------------------------
    ungenüged

    Alle anderen ganzzahligen Eingaben
    ------------------------------------------
    Phantasienote

*/

#include <iostream>
using namespace std;

int main(void)
{
    short note;
    cout << "Schul-Notenwert eingeben: ";
    cin >> note;

    switch (note)
    {
    case 1: cout << "sehr gut" << endl; break;
    case 2: cout << "gut" << endl; break;
    case 3: cout << "befriedigend" << endl; break;
    case 4: cout << "ausreichend" << endl; break;
    case 5: cout << "mangelhaft" << endl; break;
    case 6: cout << "ungenuegend" << endl; break;
    default: cout << "Phantasienote" << endl; break;
    }

    return(0);
}
