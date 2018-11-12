//6.Escriba un programa que calcule X elevado a Y, donde tanto x como y son enteros positivos, sin utilizar la función pow.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int x,y,i,solucion = 1;
	
	cout<<"\tPrograma para hacer potencias.\n";
	cout<<"Introduce la base de la potencia x: "; cin>>x;
	cout<<"Introduce el exponente de la potencia y: "; cin>>y;
	
	for(i=1;i<=y;i++){
		solucion = solucion * x;
	}
	cout<<"\nResultado: "<<solucion<<endl;
	
	
	system("pause");
	return 0;
}
