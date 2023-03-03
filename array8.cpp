#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;
int calcolamax(int arrayInteri[], int arrayInterilen)
{ // trova il numero più grande dell'array
    int max = 0;
    int calcolamax;
    // guarda tra tutti gli elementi dell' arrayInteri
    for (int i = 1; i < arrayInterilen; i++)
    {
        // se numero preso è maggiore del precedente
        if (arrayInteri[i] > arrayInteri[ max ])
        {
            // assegna il nuovo massimo
             max = i;
        }
    }
    return max;
}
int main()
{
    // dichiaro larray
    int arrayInteri[] = {2, 1, 2, 3};
    // dichiaro la lungezza dell array
    int arrayInterilen = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    // dichiaro max,apro la funzione che richiamo fuori dal main
    int max = calcolamax(arrayInteri, arrayInterilen);
    cout << "stampa il numero piu alto  " << max << endl;
    return 0;
}
