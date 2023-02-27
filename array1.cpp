#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
    int arrayInteri[4] = {1, 2, 3, 4};
    int sommapari = 0;
    int sommadispari = 0;
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    int pari, dispari;
    for (int i = 0; i < grandezza; i++)
    {
       
        if (arrayInteri[i] % 2 == 0)
        {


            sommapari += arrayInteri[i];
            arrayInteri[i] = pari;
             cout << " pari  " << endl;
        }
        else if (arrayInteri[i] % 2 != 0)
        {
           
            sommadispari += arrayInteri[i];
            arrayInteri[i] = dispari;
             cout << " dispari  " << endl;
        }
    }
    cout << " la somma dei numeri pari e' " << sommapari << endl;
    cout << "la somma dei numeri dispari e' " << sommadispari << endl;
}