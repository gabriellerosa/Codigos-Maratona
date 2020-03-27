#include <iostream>

using namespace std;

void merge(int array[], int ini, int m, int fim){
    
    //INDICES PARA MANIPULAR O ARRAY
    int k;
    // FIM PARA 2 ARRAYS, POIS VAMOS MANIPULÁ-LOS SEPARADAMENTE AQUI
    int tam1, tam2;
        
    // OS TAMANHOS DO SUBARRAY
    tam1 = m - ini + 1;
    tam2 = fim - m;
    int dir[tam1], esq[tam2];

    // PASSAR OS VALORES DO ARRAY ORIGINAL PARA OS 2 MENORES
    for(int i = 0; i < tam1; i++){
        dir[i] = array[ini + i];
    }

    for(int i = 0; i < tam2; i++){
        esq[i] = array[m + 1 + i];
    }

    // AGORA VAMOS FAZER A ORDENAÇÃO DESSA COISA TODA
    int i = 0, j = 0;
    
    // INICIO DO ARRAY ORIGINAL
    k = ini;
    
    // ENQUANTO TIVER VALOR EM AMBOS DEVEMOS COMPARAR
    while(i < tam1 && j < tam2){

        if(dir[i] <= esq[j]){

            array[k] = dir[i];
            i++;
            k++;
        }else{
    
            array[k] = esq[j];
            j++;
            k++;
        }                
        
    }  

    // SE O I FOR MENOR QUE O tam1 SIGNIFICA QUE AINDA TEM ELEMENTO LÁ
    while(i < tam1){

        array[k] = dir[i];
        i++;
        k++;        

    }

    // A MESMA COISA PRO OUTRO LÁ
    while(j < tam2){

        array[k] = esq[j];
        j++;
        k++;        

    }   
}


// É NECESSARIO PASSAR UM ARRAY E O INICIO DO ARRAY E O FIM DO MESMO 
void mergeSort(int array[], int ini, int fim){

    // SE O INICIO FOR MENOR QUE O FIM SIGNIFICA QUE É POSSIVEL
    if(ini < fim){
        
        //PRECISAREMOS DIVIDIR ESSE ARRAY NO MEIO
        int m = (ini + fim)/ 2;

        //SORT PRIMEIRO E SEGUNDO ARRAY
        mergeSort(array, ini, m);
        mergeSort(array, m + 1, fim);
    
        merge(array, ini, m, fim);

    }

}

int main(){

    int arr[] = {2, 8, 5, 3, 9, 4, 1, 7};
    //int arr[] = {2, 8, 5, 3};
    int size = 8;
    
    cout << "O array foi esse: " << endl;
    for(int i = 0; i < size; i++){

        cout << " " << arr[i] << " ";
    }

    cout << "\n";

    mergeSort(arr, 0, size - 1);

    cout << "Acredito que esteja ordenado ... : " << endl;
    for(int i = 0; i < size; i++){

        cout << " " << arr[i] << " ";
    }
    
    cout << "\n";

    return 0;
}