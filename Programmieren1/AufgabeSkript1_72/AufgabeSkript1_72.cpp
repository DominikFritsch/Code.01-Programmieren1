/* Projekt: AufgabeSkript1_72 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;
    int main( void )
    {
        short i=124;
        unsigned short j=0x1fa5;
        //Einstellen vom Hexadezimalen-Ausgabeformat
        cout<< hex;
        cout<< i--<< " " << --j << endl;
        cout<< i++ << " " << ++j << endl;
        cout<< i<< " " << j << endl;
        j = ~j;
        cout<< !i<< " " << j << endl;
        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    7c  1fa4
    7b  1fa5
    7c  1fa5
    0   e05a

*/

#include <iostream>
using namespace std;
int main(void)
{
    short i = 124;
    unsigned short j = 0x1fa5;
    //Einstellen vom Hexadezimalen-Ausgabeformat
    cout << hex;
    cout << i-- << " " << --j << endl;
    cout << i++ << " " << ++j << endl;
    cout << i << " " << j << endl;
    j = ~j;
    cout << !i << " " << j << endl;
    return 0;
}