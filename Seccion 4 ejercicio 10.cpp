// 10.Escribe un programa que calcule el valor de: 1!+2!+3!+…+n! (Suma de factoriales).

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero, factorial = 1, suma = 0;
	
	cout<<"\tSuma de factoriales.\n";
	cout<<"Ingrese el numero de valores que desea sumar: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial= factorial*i;
		suma = factorial + suma;
	}
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	

	system("pause");
	return 0;
}
