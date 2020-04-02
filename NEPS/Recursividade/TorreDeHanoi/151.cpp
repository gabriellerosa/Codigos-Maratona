//Logo, se pra K-1 discos a gente consegue, pra K discos também conseguimos
//Então se K-1 = 1, a gente consegue pra K= 2;
//se K-1 = 2, a gente consegue pra K = 3;
//1 dever de casa :conjunto dos números naturais e os axiomas de Peano
/*int hanoi(int n, int orig, int dest, int temp){
    int num_movimentos = 0;
    if(n==1){
        return 1; //caso trivial, a gente sabe que com 1 disco basta 1 movimento 
    }
    else{
        num_movimentos += hanoi(n-1, orig, temp, dest); //mover a torre com n-1 discos pra outro pino
        num_movimentos++; //mover a base pro pino destino
        num_movimentos += hanoi(n-1, temp, dest, orig); //mover a torre com n-1 discos pro pino destino
        return num_movimentos;
    }
}*/

/*int hanoi(int n){
    int num_movimentos = 0;
    if(n==1){
        return 1; //caso trivial, a gente sabe que com 1 disco basta 1 movimento 
    } else{
        num_movimentos += hanoi(n-1); //mover a torre com n-1 discos pra outro pino
        num_movimentos++; //mover a base pro pino destino
        num_movimentos += hanoi(n-1); //mover a torre com n-1 discos pro pino destino
        return num_movimentos;
    }
}*/

//isso é relacionado a qtd de chamadas por função né?
//3 Dever de casa: Mostrar que o somatório da quantidade de nós por camada, de uma árvore de recursão com N camadas, é: 2^N -1

/*
int Hanoi(int N){
   if(N==1)
    return 1;

   return 1+2*Hanoi(N-1);
}

int main(){
  int N, j=1;

  while(true){
    cin>>N;
    if(N==0)
        break;

    cout<<"Teste "<<j<<endl<<Hanoi(N)<<endl;
    j++;
  }
*/
// a msm coisa, só diminuiu e mudou o nome das variaveis
/*int hanoi(int n){
    int ans = 0;
    if(n==1){
        return 1; 
    } else{
        ans += hanoi(n-1); 
        ans++; 
        ans += hanoi(n-1);
        return ans;
    }
}*/
//simplificamos o q tava em cima
//pq foi pra isso e tirou o ans++
/*int hanoi(int n){
    int ans = 1;
    if(n > 1)
        ans += hanoi(n-1);  
        ans += hanoi(n-1);
    }
    return ans;
}

1 - prova por indução matemática;
2 - Compreensão do problema;
3 - Abstração do problema;
4 - análise da árvore de recursão;
5 - análise de simetrias;
6 - simplificação de implementação
7 - análise de complexidade;
8 - GET THE FUCKING ACCEPTED!!!!
*extras: 4 exercícios (Extremamente recomendado que faça)*/
//E o 4º dever de casa: Estudar o algoritmo recursivo de exponeciação rápida (ou binária) de números inteiros


/*int hanoi(int n){
    int ans = 1;
    if(n > 1)
        ans += 2*hanoi(n-1); //pq sao simetricar embora conceitualmente elas sejam diferentes 
    }
    return ans;
}*/

//pode simplificar pra isso
/*int hanoi(int n){
    return 1 + (n == 1 ? 0 : 2*hanoi(n-1));
}*/



#include <iostream>

using namespace std;

int ans;

int hanoi(int n){
    int ans = 1;
    if(n > 1){
        ans += 2*hanoi(n-1);
    }
    return ans;
}

int main(){

    int n, t = 1;

    while(cin >> n, n){
        
        cout << "Teste " << t++ << "\n" << hanoi(n) << "\n\n";

    }

    return 0;
}
