#include <iostream>
#include <time.h>
#include <math.h>

int main(int argc, char** argv) {
	int total=0, h=0, min=0, seg=0;
	
	printf("Entre com o numero de segundos: ");
	scanf("%d", &total);
	
	h = total/3600;
	min = (total - (h*3600))/60;
	seg = total - (h*3600) - (min*60);
	
	printf("%d segundos = %d hora(s), %d minuto(s) e %d segundo(s)", total, h, min, seg);
	
	return 0;
}
