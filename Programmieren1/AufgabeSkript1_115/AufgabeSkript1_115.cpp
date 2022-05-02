/* Projekt AufgabeSkript1_115 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        for(short x=2; x > 1; x++)
        {
            cout << " Hallo " << endl;
        }

        for(int x=1; x < 20; )
        {
            cout << " Hallo " << endl;
        }

        for(; 1; )
        {
            cout << " Hallo " << endl;
        }

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

#include <iostream>
using namespace std;

int main(void)
{
    int counter = 0;

    //for-Schleife gibt 32768 - 2 mal Hallo aus.
    for (short x = 2; x > 1; x++)
    {
        cout << " Hallo " << endl;
        ++counter;
    }

    std::cout << "Anzahl an Ausgaben: " << counter;
    std::cout << std::endl;

    /*
    //for-Schleife führt zu einer Endlosschleife, da die Zählervariable x nicht verändert wird.
    for (int x = 1; x < 20; )
    {
        cout << " Hallo " << endl;
    }
    */

    /*
    //for-Schleife führt zu einer Endlosschleife, da 1 logisch wahr ist und somit die Bedingung immer erfüllt ist.
    for (; 1; )
    {
        cout << " Hallo " << endl;
    }
    */

    return(0);
}
