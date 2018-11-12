//7.Escriba un programa que calcule el valor de 1+2+3+...+n

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero,suma = 0;
	
	cout<<"\tSuma de n numeros.\n";
	cout<<"\nDigite el numero de valores que desea sumar: "; cin>>numero;
	
	for(int i=1;i<=numero;i++){ 
		suma = suma + i;
	}
	
	cout<<"\nLa suma vale: "<<suma<<endl;
	

	getch();
	return 0;
}
