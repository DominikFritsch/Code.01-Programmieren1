/* Projekt: Übung3_8 */

/* Aufgabe:

    Schreiben Sie ein C++ Programm (unter Benutzung von Schleifen und Kontrollstrukturen),
    welches nachfolgende Ausgabe erzeugt.

    abcdefghijklmNOPQRSTUVWXYZ
    bcdefghijklmnOPQRSTUVWXYZA
    cdefghijklmnoPQRSTUVWXYZAB
    defghijklmnopQRSTUVWXYZABC
    efghijklmnopqRSTUVWXYZABCD
    fghijklmnopqrSTUVWXYZABCDE
    ghijklmnopqrsTUVWXYZABCDEF
    hijklmnopqrstUVWXYZABCDEFG
    ijklmnopqrstuVWXYZABCDEFGH
    jklmnopqrstuvWXYZABCDEFGHI
    klmnopqrstuvwXYZABCDEFGHIJ
    lmnopqrstuvwxYZABCDEFGHIJK
    mnopqrstuvwxyZABCDEFGHIJKL
    nopqrstuvwxyzABCDEFGHIJKLM
    opqrstuvwxyzaBCDEFGHIJKLMN
    pqrstuvwxyzabCDEFGHIJKLMNO
    qrstuvwxyzabcDEFGHIJKLMNOP
    rstuvwxyzabcdEFGHIJKLMNOPQ
    stuvwxyzabcdeFGHIJKLMNOPQR
    tuvwxyzabcdefGHIJKLMNOPQRS
    uvwxyzabcdefgHIJKLMNOPQRST
    vwxyzabcdefghIJKLMNOPQRSTU
    wxyzabcdefghiJKLMNOPQRSTUV
    xyzabcdefghijKLMNOPQRSTUVW
    yzabcdefghijkLMNOPQRSTUVWX
    zabcdefghijklMNOPQRSTUVWXY

    Versuchen Sie als ersten Lösungsschritt ein Programm zu schreiben, welches alle Buchstaben
    nur als Kleinbuchstaben ausgibt. Bauen Sie dann in einem zweiten Schritt die geeignete
    Umschaltung auf die Ausgabe von Groß- und Kleinbuchstaben ein.

    --> 26 Zeilen --> 26 Buchstaben

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    int a = 97;

    for (int i1 = 0; i1 < 26; i1++)
    {
        for (int i2 = 0; i2 < 26; i2++)
        {        
            if (i2 >= 26 / 2)
            {
                //Großbuchstaben
                if (i2 >= 26 - i1)
                {
                    std::cout << (char)(a-32);
                    a++;
                }
                else std::cout << (char)(97 - 32 + i2 + i1);
            }
            else
            {
                //Kleinbuchstaben
                if (i2 >= 26 - i1)std::cout << (char)(a++);
                else std::cout << (char)(97 + i2 + i1);
            }
        }
        a = 97;
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    
    return(0);
}
#pragma endregion



