#include <iostream>
#define TAM 3

int main(int argc, char** argv) {
	int num[TAM], i=0, j=0, aux[TAM];
	
	for( ; i<TAM ; i++){
		cout << "Informe o valor: " << i+1;
		cin >>num;
	}
	
	for(i=0 ; i<TAM ; i++){
		for( ; j<TAM ; j++){
			aux[j] = num[i];
			}		
		}
	}
	for(i=0 ; i<TAM ; i++){
	cout << aux[j];
	}
	
	
	return 0;
}
