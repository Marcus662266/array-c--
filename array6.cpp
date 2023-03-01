#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    int arrayInput[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                      // dichiaro larray in input
    int arrayInputSize = sizeof(arrayInput) / sizeof(arrayInput[0]);     // lunghezza larray in input

    int arrayoutput[arrayInputSize];                                  // dichiaro l'array in output
    int arrayoutputSize = 0;  
                                           // imposto a zero perche vuoto

    for (int i = 0, j=0; i < arrayInputSize; i++)
    {                                                        // iterazione sull'array di input
        if (arrayInput[i] % 2 == 0)
        {                                                     // il numero che leggo se è pari lo inserisco nella prima posizione output
            arrayoutput[j++] = arrayInput[i];
            arrayoutputSize++;                                       // incremento la posizione dell output
        }
    }

    cout << "Input array: ";
    for (int i = 0; i < arrayInputSize; i++)
    {                                                                // stampa dell'array di input
        cout << arrayInput[i] << " ";
    }
    cout << endl;

    cout << "Output array: ";
    for (int i = 0; i < arrayoutputSize; i++)
    {                                                                 // stampa dell'array di output
        cout << arrayoutput[i] << " ";
    }
    cout << endl;
    return 0;

}