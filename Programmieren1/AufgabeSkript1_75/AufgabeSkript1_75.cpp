/* Projekt: AufgabeSkript1_75 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:
    
    #include <iostream>
    using namespace std;

    int main( void )
    {
        int i=1, j=3;
        float x;
        cout << i+j << " " << i-j << " " << i*j << endl;
        x=i/j; // Vorsicht Falle!!!
        cout << i/j << " " << i%j << " " << x << endl;
        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    4 -2  3
    0  1  0

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 1, j = 3;
    float x;
    cout << i + j << " " << i - j << " " << i * j << endl;
    x = i / j; // Vorsicht Falle!!!
    cout << i / j << " " << i % j << " " << x << endl;
    return 0;
}