/*12. Hacer un programa que calcule el resultado de la siguiente expresión:
		1-2+3-4+5-6...n                   */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero,numPar,Suma=0,Resta=0,Total=0;
	
	cout<<"Ingrese el numero de valores que desea sumar: "; cin>>numero;
	
	for(int i=0;i<=numero;i++){
		if(i%2==0){
			numPar = i*-1;
			Suma += numPar;
		}
		else{
			Resta += i;
		}
	}
	
	Total = Suma + Resta;
	cout<<"\nEL Total de la suma es: "<<Total<<endl;
	
	
	system("pause");
	return 0;
}
