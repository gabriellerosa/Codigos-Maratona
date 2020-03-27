#include <iostream>

using namespace std;

// Inicialmente, teremos um afunção MergeSort que vai fazer a divisao dos arrays

int* mergeSort(int array[], int ini, int fim){

    // Se tiver tamanho um, retorna o próprio valor
    if( array.size() == 1 )
        return array;

    // Senão vamos dividir esse array que acabamos de receber
    int meio = fim/2;       

    // E precisamos fazer o merge nas duas metades agora
    int arrayA[] = mergeSort(arrayA, ini, meio);
    int arrayB[] = mergeSort(arrayB, meio+1, fim);

    return merge( arrayA, arrayB );

}

//merge 2 sub arrays 
//primeiro sub array a[ini, meio]
//segundo sub array b[meio+1, fim]
int* merge(int a[], int b[]){

    int arrayC[ (a.size() - 1) + (b.size() - 1) ];
    int dir;
    int esq;

    while(){

        

    }

    
    return arrayC;

}

int main(){

    mergeSort(array, 0, array.size() - 1);

    return 0;
}