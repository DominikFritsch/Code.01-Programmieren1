/* Projekt: AufgabeSkript1_136 */

/* Aufgabe:

    Welche Ausgabe liefert folgendes C++-Programm:

    #include <iostream>
    using namespace std;

    int main(void)
    {
        for(int i=0; i < 10; i++)
            cout << i << endl;
        cout << "Variable i (EndWert) = " << i << endl;
        return 0;
    }
*/

/* Lösung:

    Hier meldet der Compiler einen Fehler, da die Variable i lokal in der for-Schleife
    definiert wurde, und daher nur innerhalb der Schleife bekannt ist.

    Deswegen kann die Anweisung
        cout << "Variable i (EndWert) = " << i << endl;
    nicht ausgeführt werden.

    --> Variable i lokal in der main-Funktion deklarieren

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        cout << i << endl;
    cout << "Variable i (Endwert) = " << i << endl;

    return 0;
}