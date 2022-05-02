/* Projekt AufgabeSkript1_93 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        int i=7, j=15, k=45, m=13;
        cout << ((i>j) ? k : m) << endl;
        i = ((3*j) == k) ? (m*=4) : (m*=3);
        cout << i << " " << m << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    i   =   7
    j   =   15
    k   =   45
    m   =   13

    ((i>j) ? k : m)
    m   =   13

    i   =   ((3*j) == k) ? (m*=4) : (m*=3)
    i   =   (m = m*4)
    i   =   52
    m   =   52

    ---------------------------------------------------

    13
    52  52

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 7, j = 15, k = 45, m = 13;
    cout << ((i > j) ? k : m) << endl;
    i = ((3 * j) == k) ? (m *= 4) : (m *= 3);
    cout << i << " " << m << endl;

    return(0);
}
