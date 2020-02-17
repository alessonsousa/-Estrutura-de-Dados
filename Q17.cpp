#include <iostream>
#include <math.h>

int main(int argc, char** argv) {
	int natural=0, par=-2;
	
	printf("Informe um numero natural par: ");
	scanf("%d", &natural);
	
	while(par < natural){				
		par = par + 2;
		printf("\nPares Ordem Crescente: %d", par);		
	}
	
	printf("\n");
	
	while(natural >= 0){		
		if(natural%2 != 0){
			printf("\nImpares Ordem Decresente: %d", natural);	
		}
		natural = natural -1;	
	}
	
	return 0;
}
