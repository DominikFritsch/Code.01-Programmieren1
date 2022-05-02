/* Projekt: Übung4_5 */

/* Aufgabe:

    Implementieren Sie die Vorzeichenfunktion signum : R --> {−1, 0, 1} in C++:

    signum(x) --> -1 falls x < 0, 0 falls x = 0, +1 falls x > 0

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region DEKLARATION
int signum(float);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    std::cout << "sgnum(2.3) = " << signum(2.3f) << std::endl;
    std::cout << "sgnum(-2.3) = " << signum(-2.3f) << std::endl;
    std::cout << "sgnum(0) = " << signum(0.0f) << std::endl;
    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
int signum(float x)
{
    if (x < 0.0f)
        return(-1);
    if (x > 0.0f)
        return(1);
    return(0);
}
#pragma endregion


