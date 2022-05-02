/* Projekt AufgabeSkript1_90 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        int i=15, j=7, k, m, n;
        m = (i+=j);
        n = k = (i/=j);
        cout << i << " " << j << " " << k << endl;
        cout << m << " " << n << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    i   =   15
    j   =   7
    k   =   undefiniert
    m   =   undefiniert
    n   =   undefiniert

    m   =   (i+=j);
    m   =   (i = 15 + 7)
    i   =   22
    m   =   22
    n = k = (i/=j)
    n = k = (i = 22 / 7)
    i   =   3
    n   =   3
    k   =   3

    ----------------------------------------------

    3   7   3
    22  3

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 15, j = 7, k, m, n;
    m = (i += j);
    n = k = (i /= j);
    cout << i << " " << j << " " << k << endl;
    cout << m << " " << n << endl;

    return(0);
}
