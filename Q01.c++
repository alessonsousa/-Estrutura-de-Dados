#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int vetor[4]={25, 15, 30, 20}, soma=0, soma2=0, dif=0, i=0, j=3;
	
	
	while(i<=(vetor[4]/2)){
		soma = soma + vetor[i];
		i++;
		          soma2 = soma2 + vetor[j];
		                 j--;
	}
	
	dif= soma - soma2;
	cout << "Resultado:" << dif;	
	return 0;
}
