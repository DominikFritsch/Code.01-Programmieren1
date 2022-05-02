/* Projekt AufgabeSkript1_86 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        unsigned short i = 0x3f20, c1 = 0x2d, c2 = 0x5a, c3, c4, c5;
        c3 = c1&c2;
        c4 = c1^c2;
        c5 = c1|c2;

        //Einstellen vom Hexadezimalen-Ausgabeformat
        cout << hex;
        cout << c3 << " " << c4 << " " << c5 << endl;
        cout << (i>>2) << " " << (i<<2) << endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    short hat 16 Bits

    c1  = 0000 0000 0010 1101
    c2  = 0000 0000 0101 1010
    c3  = undefiniert
    c4  = undefiniert
    c5  = undefiniert

    c3  = c1&c2;
    c3  = 0000 0000 0000 1000   -->     8

    c4  = c1^c2;
    c4  = 0000 0000 0111 0111   -->     77

    c5  = c1|c2;
    c5  = 0000 0000 0111 1111   -->     7F



    i   = 0011 1111 0010 0000

    i>>2
    i   = 0000 1111 1100 1000   -->     FC8

    i<<2
    i   = 1111 1100 1000 0000   -->     FC80

    ----------------------------------------------

    8       77      7F
    FC8     FC80

*/

#include <iostream>
using namespace std;

int main(void)
{
    unsigned short i = 0x3f20, c1 = 0x2d, c2 = 0x5a, c3, c4, c5;
    c3 = c1 & c2;
    c4 = c1 ^ c2;
    c5 = c1 | c2;

    //Einstellen vom Hexadezimalen-Ausgabeformat
    cout << hex;
    cout << c3 << " " << c4 << " " << c5 << endl;
    cout << (i >> 2) << " " << (i << 2) << endl;

    return(0);
}
