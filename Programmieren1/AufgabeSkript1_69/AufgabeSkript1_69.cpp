/* Projekt: AufgabeSkript1_69 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;
    int main(void)
    {
        int wert = 3;
        cout << "Der Wert ist " << ++wert << endl;
        cout << "Der Wert ist " << --wert << endl;
        cout << "Der Wert ist " << wert << endl;

        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    Der Wert ist 4
    Der Wert ist 3
    Der Wert ist 3

*/

#include <iostream>
using namespace std;
int main(void)
{
    int wert = 3;
    cout << "Der Wert ist " << ++wert << endl;
    cout << "Der Wert ist " << --wert << endl;
    cout << "Der Wert ist " << wert << endl;

    return 0;
}