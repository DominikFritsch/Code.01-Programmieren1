/* Projekt: AufgabeSkript1_79 */

/* Aufgabe:

    Es sei folgendes Programm gegeben:
    
    #include <iostream>
    using namespace std;

    int main( void )
    {
        int i=2,j=3;
        cout << (i<j) << " " << (i<=j) << " " << (i>j) << endl;
        cout << (i==j) << " " << (i!=j) << endl;
        cout << (i&&0) << " " << (i&&1) << " " << (i||0) << endl;
        return 0;
    }

    Welche Ausgabe liefert das Programm?

*/

/* Antwort:

    1   1   0
    0   1
    0   1   1

*/

#include <iostream>
using namespace std;

int main(void)
{
    int i = 2, j = 3;
    cout << (i < j) << " " << (i <= j) << " " << (i > j) << endl;
    cout << (i == j) << " " << (i != j) << endl;
    cout << (i && 0) << " " << (i && 1) << " " << (i || 0) << endl;
    return 0;
}