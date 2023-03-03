#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;


int arrayInteri1[],  arrayInteri1len, arrayInteri2[], arrayInteri2len ;
int comune(int arrayInteri1[], int arrayInteri1len, arrayInteri2[], arrayInteri2len)
{
    int contatore = 0;
    for (i = 0; i < arrayInteri1len; i++)
    {
        for (k = 0; k < arrayInteri2len; k++)
        {
            if (arrayInteri1[i] == arrayInteri2[k])
                contatore++;
        }
    }
    return contatore;
}

int main()
{

    int arrayInteri1[] = {2, 1, 9, 8}; // dichiaro larray 1
    int arrayInteri2[] = {1, 2, 7, 5}                                            // dichiaro array 2
    int arrayInteri1len = sizeof(arrayInteri1) / sizeof(arrayInteri1[0]); // dichiaro la lungezza dell array 1
    int arrayInteri2len = sizeof(arrayInteri2) / sizeof(arrayInteri2[0]); // lunghezza array 2
    int quanti = comune(arrayInteri1, arrayInteri1len, arrayInteri2, arrayInteri2len)
                     cout
                 << "stampa quanti sono i numeri in comune  " << quanti << endl;

    return 0;
}