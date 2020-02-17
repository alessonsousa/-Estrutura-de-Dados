#include <iostream>
#include <stdlib.h>

using namespace std;

/*Dado um determinado vetor, faça um programa que encontre o maior elemento.*/
/* Questão 7*/

int main(){

 int vetor[4];
 int i;
 int maior;

 for(i = 0; i < 4; i++){
     cin >> vetor[i];
 } 
 maior = vetor[0];
for(i = 1; i < 4; i++){
    if(vetor[i] > maior){
        maior = vetor[i];
    }
}
cout << "maior valor:" << maior;


    return 0;
}