/* Projekt: AufgabeSkript1_63 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:

    #include <iostream>
    using namespace std;
    int main(void)
    {
        bool var1, var2;

        var1 = (3>4);
        var2 = (3<4);

        cout << var1 << " " << var2 << endl;

        cout << boolalpha;
        cout << var1 << " " << var2 << endl;

        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    0 1
    false true

*/

#include <iostream>
using namespace std;

int main(void)
{
    bool var1, var2;

    var1 = (3 > 4);
    var2 = (3 < 4);

    cout << var1 << " " << var2 << endl;

    cout << boolalpha;
    cout << var1 << " " << var2 << endl;

    return 0;
}