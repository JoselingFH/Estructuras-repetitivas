/*14-En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de:
a)Alumnos que aprobaron todos los ex�menes.
b)Alumnos que aprobaron al menos un examen.
c)Alumnos que aprobaron �nicamente el �ltimo examen.

Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas. */

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	float Ex1,Ex2,Ex3;
	int Todos=0,Almenos1=0,Ultimo=0;
	
	for(int i=1;i<=5;i++){
		cout<<i<<". Ingrese la nota del Examen 1: "; cin>>Ex1;
		cout<<i<<". Ingrese la nota del Examen 2: "; cin>>Ex2;
		cout<<i<<". Ingrese la nota del Examen 3: "; cin>>Ex3; cout<<"\n";
	
	if((Ex1>10)&&(Ex2>10)&&(Ex3>10)){  
		Todos++;				
	}
	if((Ex1>10)||(Ex2>10)||(Ex3>10)){ 
		Almenos1++;
	}
	if((Ex1<10)&&(Ex2<10)&&(Ex3>10)){ 
		Ultimo++;
	}
}
	cout<<"\n a)Alumnos que aprobaron todos los examenes: "<<Todos<<endl;	
	cout<<" b)Alumnos que aprobaron al menos un examen: "<<Almenos1<<endl;
	cout<<" c)Alumnos que aprobaron unicamente el ultimo examen: "<<Ultimo<<endl;

	system("pause");
	return 0;
}
	
