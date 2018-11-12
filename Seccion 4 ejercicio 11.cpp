//11. Escriba un programa que calcule el valor de: 2 elevado a 1+ 2 elev. 2+ 2 elev. 3...+2 elev. a n.
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	int numero,suma = 0, elevado = 0;
	
	cout<<"Ingrese el numero de valores que desea sumar: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){    
		elevado= pow(2,i); 
		suma = elevado + suma; 
	}
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	
	
	system("pause");
	return 0;
}
