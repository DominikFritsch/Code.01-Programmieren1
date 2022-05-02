/* Projekt AufgabeSkript1_80 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        int i=0xb, j=8;
        cout << (i<j) << " " << (i==j) << " " << (i!=j) << endl;
        cout << (i&&0&&j) << " " << (i&&1&&j) << endl;
        cout << (i||1||j) << endl;
        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    0xb = 11

    ------------------------------------

    0 0 1
    0 1
    1

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 0xb, j = 8;
    cout << (i < j) << " " << (i == j) << " " << (i != j) << endl;
    cout << (i && 0 && j) << " " << (i && 1 && j) << endl;
    cout << (i || 1 || j) << endl;
    return(0);
}
