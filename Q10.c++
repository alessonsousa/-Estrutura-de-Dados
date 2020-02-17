#include <iostream>
using namespace std;

int main() {
	int a=2, b=10, *p;
	
	p = &b;
	*p=3;
	b = a + (*p);
	
	cout << "Valor de b:" <<  b;
	
	return 0;
}
