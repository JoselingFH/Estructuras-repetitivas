/* 16-Realice un programa que calcule la descomposici�n en factores primos de un n�mero entero.
Por ejemplo: 20 = 2*2*5. */

#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;

	for(int i=2;numero>1; i++){ 
		while(numero%i==0){
			cout<<i<<" ";
			numero = numero / i;
		}		
	}
	cout<<"\n";
	system("pause");
	return 0;
}
