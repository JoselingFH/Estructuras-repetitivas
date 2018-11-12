//9.Esciba un programa que calcule el valor de 1*2*3*..*n (factorial de un numero)
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero,factorial=1;
	
	cout<<"\tFactorial de un numero.\n";
	cout<<"\nDigite el numero de valores que desee trabajar: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){ 
		factorial = factorial * i;
	}
	
	cout<<"\nEl resultado es: "<<factorial<<endl;
	

	getch();
	return 0;
}
