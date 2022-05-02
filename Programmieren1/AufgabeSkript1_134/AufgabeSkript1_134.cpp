/* Projekt: AufgabeSkript1_134 */

/* Aufgabe:

    Welche Ausgabe liefert folgendes C++-Programm:

    #include <iostream>
    using namespace std;
    int a=3, b=11; //globale Variable

    int main(void)
    {
        cout << "globales a = " << a << " globales b = " << b << endl;
        
        int a = 300;
        cout << "lokales a = " << a << " globales a = " << ::a << endl;
        {
            int b=222;
            cout << "lokales b = " << b << " globales b = " << ::b << endl;
            cout << "a (aus Block hoeher) = " << a << endl;
        }
        cout << "globales b (wieder sichtbar) = " << b << endl;
        return 0;
    }
*/

/* Lösung:

    globales a = 3 globales b = 11
    lokales a = 300 globales a = 3
    lokales b = 222 globales b = 11
    a (aus Block hoeher) = 300
    globales b (wieder sichtbar) = 11

*/

#include <iostream>
using namespace std;
int a = 3, b = 11; //globale Variable

int main(void)
{
    cout << "globales a = " << a << " globales b = " << b << endl;

    int a = 300;
    cout << "lokales a = " << a << " globales a = " << ::a << endl;
    {
        int b = 222;
        cout << "lokales b = " << b << " globales b = " << ::b << endl;
        cout << "a (aus Block hoeher) = " << a << endl;
    }
    cout << "globales b (wieder sichtbar) = " << b << endl;
    return 0;
}