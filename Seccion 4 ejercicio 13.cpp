/*13-Hacer un programa que realice la serie Fibonacci
	Fibonacci-> 1,1,2,3,5,8,13...n. */
	
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero,a=0,b=1,c=1;

	cout<<"Ingrese el numero de elementos: "; cin>>numero;
	
	cout<<"1 ";
	for(int i=1;i<numero;i++){
		c= a + b;
		cout<<c<<" ";
		a= b; 
		b= c;
	}
	
	cout<<"\n";
	system("pause");
	return 0;
}
