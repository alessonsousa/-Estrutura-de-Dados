#include <iostream>
#include <math.h>

int main() {
	float rendA=0, rendB=0, saldoA=100, saldoB=100;
	int i=1;
		
	for( ; rendB<saldoA; i++){
		
		rendA = rendA + (0.10 * 100);
		saldoA = saldoA + rendA;
				
		rendB = rendB + (0.05 * saldoB);			
	}
	
	
	printf("Total de anos: %d\nRendimento de Daiane: %.2f\nRendimento de Cleo: %.2f", i, saldoA, rendB);
	
	return 0;
}
