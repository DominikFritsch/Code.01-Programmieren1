/* Projekt AufgabeSkript1_111 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    using namespace std;

    int main (void)
    {
        short zahl;
        cout << "Ganze Zahlen eingaben (Abbruch = -99): " << endl;

        do
        {
            cin >> zahl;
            cout << (zahl*zahl) << endl << endl;
        }while(zahl != -99);

        return(0);
    }

    Was macht dieses Programm?

*/

/* Antwort:

    Das Programm liest Zahlen im Bereich von 32768 - 32767 ein und gibt das Quadrat der eingegebenen
    Zahl am Bildschirm aus.

    Programm wird durch die Eingabe von -99 beendet. --> Das Quadrat von -99 wird vor dem Beenden ausgegeben.

*/

#include <iostream>
using namespace std;

int main(void)
{
    short zahl;
    cout << "Ganze Zahlen eingaben (Abbruch = -99): " << endl;

    do
    {
        cin >> zahl;
        cout << (zahl * zahl) << endl << endl;
    } while (zahl != -99);

    return(0);
}