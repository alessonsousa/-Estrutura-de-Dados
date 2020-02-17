#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int soma=0, i=0, j=0;
	int matriz[4][4]={50,60,40,2,3,5,70,90}; 
	
	while(i<= matriz[4][4]){
		i++;
		if(matriz[i][j]%2 == 0){
			soma = soma + matriz[i][j];
		}
		else if(matriz[i][j]%2 != 0){
			soma = soma - matriz[i][j];	
		}
	}
	
	cout << "Resultado:" << soma;
	
	return 0;
}
