#include <iostream>
#include<conio.h>

using namespace std;

double fibonacci(int n);

int main(){
    int x=0, n=0;
     
	cout <<"Digite o n-esimo termo: ";    
	cin >> n;
    
	x = fibonacci(n);
    
    cout << x;

    return 0;
}

double fibonacci(int n){
    int a=1, b=1, x=0, i=0;
    if(n==1) x=a;
    if(n==2) x=b;
    
	for(i=3; i<=n; i++){
    x = a + b;
    a = b;
    b = x;
	}
	
    return x;
}
