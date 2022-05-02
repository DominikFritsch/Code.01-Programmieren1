/* Projekt: AufgabeSkript1_49 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;

    int main(void)
    {
        short a=17000, b=17000, c;
        unsigned short x=17000, y=17000, z;
        long i=17000, j=17000, k;

        c = a + b;
        z = x + y;
        k = i + j;
        
        cout << c << endl;
        cout << z << endl;
        cout << k << endl;

        return 0;

    }

    Welche Bildschirmausgabe erzeugt das Programm und warum?

*/

/* Antwort:

    Wertebereich: 

    signed:
    -2^(n-1) .... -1  und  0 ... 2^(n-1)-1

    unsigned:
    0 ... 2^n-1

    short                   16 Bit          -32.768 ... -1 und 0 ... 32.767
    unsigned short          16 Bit          0 ... 65.535
    long                    32 Bit          -2.147.483.648 ... -1 und 0 ... 2.147.483.647

    c = a + b = 17.000 + 17.000 = 34.000 --> Überlauf

            34.000
        -   32.768
        =    1.232

        -   32.768
        +    1.232
        =  -31.536

    c = -31.536

    z = x + y = 17.000 + 17.000 = 34.000 --> kein Überlauf
    k = i + j = 17.000 + 17.000 = 34.000 --> kein Überlauf

*/

#include <iostream>
using namespace std;

int main(void)
{
    short a = 17000, b = 17000, c;
    unsigned short x = 17000, y = 17000, z;
    long i = 17000, j = 17000, k;

    c = a + b;
    z = x + y;
    k = i + j;

    cout << c << endl;
    cout << z << endl;
    cout << k << endl;

    return 0;
}
