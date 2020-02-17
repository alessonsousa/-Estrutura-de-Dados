#include <iostream>
#define TAM 5

int main() {
	double num[TAM];
	int i=0;
	
	for( ; i<TAM ; i++){
		cout << "Informe o valor: " << i+1;
		cin >> num[i];
	}
	
	cout <<"\nValor digitado: \n";
	
	for(i=0; i<TAM; i++){
		cout << num[i];
	}	
	return 0;
}
