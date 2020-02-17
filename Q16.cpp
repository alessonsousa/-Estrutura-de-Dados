#include <iostream>
#include <math.h>

int main(int argc, char** argv) {
	int n=0, vetor[n], maior=0, i=0, cont=0;
	
	printf("Informe a quantidade de valores: ");
	scanf("%d", &n);
	
	for( ; i<n; i++){
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &vetor[i]);	
	}
	
	for(i=0; i<n; i++){
		if(vetor[i] > maior){
		maior = vetor[i];
		cont++;
		}
	}
	
	printf("O maior deles: %d\nFoi lido: %d vezes", maior, cont);
	
	return 0;
}
