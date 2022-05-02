/* Projekt: AufgabeSkript1_70 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;
    int main( void )
    {
        short i=5;
        unsigned short j=0xf0f0, cj;
        //Einstellen vom Hexadezimalen-Ausgabeformat
        cout<< hex;
        cj= ~j;

        cout<< +i<< " " << !i<< " " << cj<< endl;
        cout<< ++i<< " " << j--<< endl;
        cout<< i<< " " << j << endl;
        cout<< (int)6.8 << " " << sizeof j << endl;
        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    5   0   f0f
    6   f0f0
    6   f0ef
    6   2

*/

#include <iostream>
using namespace std;
int main(void)
{
    short i = 5;
    unsigned short j = 0xf0f0, cj;
    //Einstellen vom Hexadezimalen-Ausgabeformat
    cout << hex;
    cj = ~j;

    cout << +i << " " << !i << " " << cj << endl;
    cout << ++i << " " << j-- << endl;
    cout << i << " " << j << endl;
    cout << (int)6.8 << " " << sizeof j << endl;
    return 0;
}
