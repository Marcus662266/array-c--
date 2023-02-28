#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;


bool ordine(int arrayInteri[], int arrayInterilenght)
 {
  for (int i = 1; i < arrayInterilenght; i++) { //verifica ordine e stampa
    if (arrayInteri[i] < arrayInteri[i - 1]) {
      return false;
      
    }
   
  }
  return true;
}

int main() {
  int arrayInteri1[] = {1, 2, 3, 4, 5};
  int arrayInteri2[] = {5, 4, 3, 2, 1};
  int arrayInterilenght1 = sizeof(arrayInteri1) / sizeof(arrayInteri1[0]); // trovare la lunghezza array 1
  int arrayInterilenght2 = sizeof(arrayInteri2) / sizeof(arrayInteri2[0]); // trovare la lunghezza array 2
  cout << ordine(arrayInteri1, arrayInterilenght1) << endl; //chiama l afunxione 
  cout << ordine(arrayInteri2, arrayInterilenght2) << endl;
 cout<<"crescente " << true << endl;
 cout<<"decrescente " << false << endl;
}