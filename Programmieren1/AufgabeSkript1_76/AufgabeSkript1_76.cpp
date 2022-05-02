/* Projekt: AufgabeSkript1_76 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;

    int main( void )
    {
        int i=0xc, j=5;
        float x;
        x=i/j;

        cout << i+j << " " << i-j << " " << i*j << endl;
        cout << i/j << " " << i%j << " " << x << endl;
        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    17  7   60
    2   2   2

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 0xc, j = 5;
    float x;
    x = i / j;

    cout << i + j << " " << i - j << " " << i * j << endl;
    cout << i / j << " " << i % j << " " << x << endl;
    return 0;
}