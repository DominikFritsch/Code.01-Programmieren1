/* Projekt AufgabeSkript1_106 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short i;

        for(i=1; i<=10; i++)
        {
            cout << i << "*3 = " << (3*i) <<endl;
        }

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    1*3 = 3
    2*3 = 6
    3*3 = 9
    4*3 = 12
    5*3 = 15
    6*3 = 18
    7*3 = 21
    8*3 = 24
    9*3 = 27
    10*3 = 30

    Das Programm gibt am Bildschirm das kleine 3er Einmaleins aus.

*/

#include <iostream>
using namespace std;

int main(void)
{
    short i;

    for (i = 1; i <= 10; i++)
    {
        cout << i << "*3 = " << (3 * i) << endl;
    }

    return(0);
}