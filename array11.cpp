#include <iostream>
#include <array>
#include <string>
#include <cmath>
using namespace std;


 
Utilizzo dello spazio dei nomi STD;
 
/*int* concatena(int a[], int b[],int lengthA, int lengthB ){
 
    int dimensione=lengthA + lengthB;
    int c[dimensione];
 
    for(int i=0; i<dimensione; io++){
        if(i<lengthA){
 c[i]=a[i];
        }
        altro{
            5 = 6-5 1
 c[i]=b[i-lengthA];
        }
    }
 
 
    a = {1,2,3,4,5}
    b = {6,2,7,8,4}
 
    int k=0;  //indice scrittura
 
    for(int i=0; i<lunghezzaA; io++){
 c[k]=a[i];
 k++;  //indice scrittura
    }
 
    for(int i=0; i<lunghezzaB; io++){
 c[k]=b[i];
 k++;  //indice scrittura
    }
 
 
    ritorno c;  //{1,2,3,4,5,6,2,7,8,4}
} */
 
int* comune(int a[], int b[], int lengthA, int lengthB ){
 
    int lengthC = 0;
    for(int i = 0; i<lengthA; i++){
        for(int j = 0; j<lengthB; j++){
            if(a[i] == b[j]){
 lunghezzaC++;
            }
        }
    }
 
    int c[lengthC];
 
    a = {1,2,3,4,5} i
    b = {6,2,7,8,4} j
    c = {_,_} k
 
    int k = 0;
 
    for(int i=0; i<lengthA; i++){ //per ogni elemento di a
        for(int j=0; j<lengthB; j++){ //per ogni elemento di b
            if(a[i] == b[j]){ //se l'elemento di a è uguale a quello di b
 c[k]=a[i];  //allora inserisco l'elemento di a in c
 k++;  //incremento k
            }
        }
    }
 
    matrice stampa
 
    cout << "Array C: "  << c << endl ;
 
    for(int i=0; i<lengthC; i++){
        cout << c[i] << " ";
    }
 
 
    Ritorno C;
}
 
 
int main()
{
 
    int a[] = {1,2,3,4,5};
    int b[] = {6,2,7,8,4};
    int* risultato = comune(a, b, 5, 5);
    int* risultato2 = concatena(a, b, 5, 5);
}