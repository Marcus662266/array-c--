/*Scrivi una funzione che prenda in input un array di interi e 
la sua lunghezza e restituisca il numero di sequenze di 
interi crescenti all'interno dell'array. Ad esempio, se 
l'array di input è {1, 2, 3, 5, 4, 7}, la funzione dovrebbe 
restituire 2 perché ci sono due sequenze crescenti: {1, 2, 
3} e {4, 7}. */



#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;

int arrayinput(int array[], int arraylengh)
{
    int contatore = 0;
    int i = 0;
    while (i < arraylengh)
    {
        int j = i;
        while (j < arraylengh - 1 && array[j] < array[j + 1])
        {
            j++;
        }
        if (j > i)
        {
            contatore++;
        }
        i = j + 1;
    }
    return contatore;
}

int main()
{
    int array[] = {1, 2, 3, 5, 4, 7};                    // dichiarop array
    int arraylenght = sizeof(array) / sizeof(array[0]);  // dichiaro lunghezza array
    int numeroSequenza = arrayinput(array, arraylenght); // imposto operazione da richiamare
    cout << "numersequenze  " << numeroSequenza << endl; // stampami il numero delle sequenze
    return 0;
}