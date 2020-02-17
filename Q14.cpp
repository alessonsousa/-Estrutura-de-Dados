#include <iostream>
#include <math.h>

float math(float x, float y);

int main(int argc, char** argv) {
	float x=0, y=0;
	
	printf("Informe dois valores para calcular a razao entre eles:\n");
	scanf("%f %f", &x, &y);	

	printf("%f", math(x, y));
	
	return 0;
}

float math(float x, float y){
	float cal = 0;
	
	cal = x/y;
	
	if(cal == 0) return 0;
	else if(cal > 0) return 1;
}
