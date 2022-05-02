/* Projekt: AufgabeSkript1_60 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main(void)
    {
        char a = 'm', b, c;
        cin >> b >> c;
        cout << a << b << c << endl;
        cout << (a+0) << " " << (b+1) << " " << (c+2) << endl;
        cout << (char)(a+0) << " " << (char)(b+1) << " " << (char)(c+2) << endl;
        return 0;
    }

    Welche Bildschirmausgabe liefert das Programm, wenn Sie "er" eingeben?

*/

/* Antwort:

    a = 'm', b = 'e', c = 'r'

    m       e       r
    109     102     116
    m       f       t

*/

#include <iostream>
using namespace std;

int main(void)
{
    char a = 'm', b, c;
    cin >> b >> c;
    cout << a << b << c << endl;
    cout << (a + 0) << " " << (b + 1) << " " << (c + 2) << endl;
    cout << (char)(a + 0) << " " << (char)(b + 1) << " " << (char)(c + 2) << endl;
    return 0;
}
