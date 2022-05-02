/* Projekt AufgabeSkript1_94 */

/* Aufgabe:

    Es sei folgendes C++-Programm gegeben:

    #include <iostream>
    #include <cmath>
    using namespace std;

    int main (void)
    {
        float x;
        cout << "Bitte geben Sie eine Zahl x ein: ";
        cin >> x;

        cout << fixed;
        cout.precision(3);

        cout << "x = " << x << endl;

        cout << "fabs(x) = " << fabs(x) <<endl;
        cout << "exp(x) = " << exp(x) <<endl;
        cout << "log(x) = " << log(x) <<endl;
        cout << "sin(x) = " << sin(x) <<endl;
        cout << "cos(x) = " << cos(x) <<endl;
        cout << "arccos(x) = " << acos(x) <<endl;
        cout << "sinh(x) = " << sinh(x) <<endl;
        cout << "sqrt(x) = " << sqrt(x) <<endl;

        return(0);
    }

    Was erscheint bei Ablauf dieses Programms am Bildschirm?

*/

/* Antwort:

    x           =             5.000
    fabs(x)     = |5|       = 5.000
    exp(x)      = e^5       = 148.413
    log(x)      = log_e(5)  = ln(5) = 1.609
    sin(x)      = sin(5)    = -0.959
    cos(x)      = cos(5)    = 0.284
    arccos(x)   = arccos(5) = nicht definiert
    sinh(x)     = sinh(5)   = 74.203
    sqrt(x)     = sqrt(5)   = 2.236

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    float x;
    cout << "Bitte geben Sie eine Zahl x ein: ";
    cin >> x;

    cout << fixed;
    cout.precision(3);

    cout << "x = " << x << endl;

    cout << "fabs(x) = " << fabs(x) << endl;
    cout << "exp(x) = " << exp(x) << endl;
    cout << "log(x) = " << log(x) << endl;
    cout << "sin(x) = " << sin(x) << endl;
    cout << "cos(x) = " << cos(x) << endl;
    cout << "arccos(x) = " << acos(x) << endl;
    cout << "sinh(x) = " << sinh(x) << endl;
    cout << "sqrt(x) = " << sqrt(x) << endl;

    return(0);
}