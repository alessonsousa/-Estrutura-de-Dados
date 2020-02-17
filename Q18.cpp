#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int idade=0, tempServico=0;
	
	cout << "Informe a idade: ";
	cin >> idade;
	cout << "\nInforme o tempo de servico: ";
	cin >> tempServico;
		
	if(idade >= 65 || tempServico >= 30 || (idade >= 60 && tempServico >= 25)){
		printf("Voce pode se aposentar!");		
	}
	else if(idade < 65 || tempServico < 30 || (idade < 60 && tempServico < 25)){		
		printf("Voce NAO pode se aposentar!");
	}
		
	return 0;
}
