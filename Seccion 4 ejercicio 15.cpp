/*15-Realice un programa que solicite al usuario que piense un n�mero entero entre 1 y el 100. 
El programa debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle al usuario
si el numero que digito es menor o mayor al numero aleatorio, as� hasta que lo adivine. Y por
ultimo mostrarle el numero de intentos que le llevo.*/

#include<iostream>
#include<stdlib.h>  
#include<time.h>   
using namespace std;
int main(){
	int  numero, dato, contador = 0;
	
	srand(time(NULL));  
	dato = 1 + rand()%(100); 
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		if(numero>dato){
			cout<<"\nDigite un numero menor: \n";
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor: \n";
		}
		contador++;

	}while(numero != dato);   
	
	cout<<"\nHas adivinado el numero.";
	cout<<"\nEl numero de intentos que llevas es: "<<contador<<endl;
	
	system("pause");
	return 0;
}
 
