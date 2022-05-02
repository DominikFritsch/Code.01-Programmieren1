/* Projekt: Übung5_3 */


/* Aufgabe:

    Sei a = (a1, a2, . . . , an) , n ∈ N, an ∈ Z eine endliche Folge von ganzen Zahlen und 
    a′ = (ai, ai+1, . . . , ai+k) , i, k ∈ N, i + k ≤ n eine endliche Teilfolge von a.
    Gesucht ist die maximale Teilsumme a_{max}, d. h. diejenige Teilfolge a′ mit der größten
    Summe der Folgenglieder:

    a_{max} = max (sum_{j=i}^{i+k} a_{j})

    Bemerkung:
    Für i = k = 0 ergibt sich die leere Teilfolge a′ = () mit der Teilsumme 0. Für i = 1, k = n−1
    ergibt sich die gesamte Folge a′ = a.

    Machen Sie sich anhand eines Beispiels klar, was obige Definition anschaulich bedeutet.
    Wählen Sie sich dazu ein Array mit 10 int Werten und ermitteln Sie alle Teilsummen
    dieses Arrays sowie die maximale Teilsumme per Hand.

    Schreiben Sie eine C++ Funktion mit folgendem Prototyp:
    
        int maxTSum(int elements, int sequence[])
    
    Die Funktion erhält ein int Array sequence mit elements Elementen und errechnet dessen
    maximale Teilsumme.

*/

#pragma region HEADER
#include <iostream>
#include <cstdlib>
#include <climits>
#pragma endregion

#pragma region DEKLARATION
int maxTSum(int, int[]);
#pragma endregion

#pragma region HAUPTPROGRAMM
int main(void)
{
    const int elements = 10;

    int values[elements] = { 0,1,2,3,4,5,6,7,8,9 };

    std::cout << "Maximale Teilsumme = " << maxTSum(elements, values);
    std::cout << std::endl;
    std::cout << std::endl;

    std::system("pause");
    return(0);
}
#pragma endregion

#pragma region DEFINITION
int maxTSum(int elements, int sequence[])
{

    int from;
    int to;
    int maxTSum = std::numeric_limits <int>::min();

    // Teilsummen
    // 0 .. 0 , 0 .. 1 , 0 .. 2 , ... , 0 .. elements -1
    // 1 .. 1 , 1 .. 2 , 1 .. 3 , ... , 1 .. elements -1
    // 2 .. 2 , 2 .. 3 , 2 .. 4 , ... , 2 .. elements -1

    for (from = 0; from < elements; from++)
    {
        for (to = 0; to < elements; to++)
        {

            int sumT = 0;

            for (int i = from; i < to; i++) {
                sumT += sequence[i];
            }

            if (sumT > maxTSum)
                maxTSum = sumT;
        }

    }

    return(maxTSum);
}
#pragma endregion