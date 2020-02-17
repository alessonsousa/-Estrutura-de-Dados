#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){

int fat, n;
cout << "Insira um valor: ";
cin >> n;
 
for(fat = 1; n > 1; n--){
fat = fat * n;
}
cout << "Fatorial calculado:" << fat;



    return 0;
}