#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	int totalCabecas=0, totalPatas=0, numPatos=0, numCoelhos=0;
	
	cout << "Informe o numero de Cabecas: ";
	cin >> totalCabecas;
    cout << "Informe o numero de Patas: ";
	cin >> totalPatas;
	

    
	numPatos = (4*totalCabecas - totalPatas)/2;
    numCoelhos =  totalCabecas - numPatos;
    

	cout << "Numero de Patos:" << numPatos; "\nNumero de Coelhos:\n" << numCoelhos;
	return 0;
}
	/*
	LOGICA
	
	X + Y = C
	4X + 2Y = P

	X = C - Y
	4(C - Y) + 2Y = P
	
	4C - 4Y + 2Y = P
	4C -2Y = P
	4C - P = 2Y

	2Y = 4C - P , resposta pra Y

	C - Y = X , resposta para X
	*/
