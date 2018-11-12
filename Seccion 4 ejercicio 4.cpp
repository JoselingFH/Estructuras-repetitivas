/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas.
Es decir, debe leer 6 temperaturas.Calcule la temperatura media del día, la temperatuta más alta y la más baja.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float temperatura,mayor = 0,menor = 999;
	float sumaTotal = 0,promedio = 0;
	
	for(int i=0;i<24;i+=4){    
		cout<<"Digite la temperatura de la hora "<<i<<": "; cin>>temperatura;		
	
		sumaTotal = sumaTotal + temperatura;
		
		if(temperatura > mayor){
			mayor = temperatura; 
		}
		if(temperatura < menor){
			menor = temperatura;
		}
		
	}
	
	promedio = sumaTotal/6;
	
	cout<<"\nTemperatura Promedio: "<<promedio<<endl;
	cout<<"Temperatura mas alta: "<<mayor<<endl;
	cout<<"Temperatura mas baja: "<<menor<<endl;
	
	system("pause");
	return 0;
}

