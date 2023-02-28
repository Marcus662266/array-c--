#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;

int calcolamax(int arrayInteri[], int arrayInterilenght)
{ // trova il numero più grande dell'array
    int max = arrayInteri[0];
    for (int i = 0; i < arrayInterilenght; i++) // guarda tra tutti gli elementi dell' arrayInteri
    {
        if (arrayInteri[i] > max)
        {                         // se numero preso è maggiore del precedente
            max = arrayInteri[i]; // assegna il nuovo massimo
        }
    }
    return max;
}
int main()
{
    int arrayInteri[] = {5, 3, 8, 2, 9};                                  // dichiaro arrayInteri
    int arrayInterilenght = sizeof(arrayInteri) / sizeof(arrayInteri[0]); // calcola la lunghezza dell'arrayInteri
    int max = calcolamax(arrayInteri, arrayInterilenght);

    cout << "Il massimo elemento dell'array è: " << max << endl; // stampa il risultato
}