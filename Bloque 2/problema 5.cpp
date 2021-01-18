/*5. Escriba un fragmento de programa que intercambie los 
valores de dos variables*/

#include<iostream>

using namespace std;

int main(){
	
	float a,b,c;
	
	cout<<"Ingrese el valor de la primera variable: "; cin>>a;
	cout<<"Ingrese el valor de la segunda variable: "; cin>>b;
	
	c = b;
	b = a;
	a = c;
	
	cout<<"El valor de la primera variable es: "<<a<<endl;
	cout<<"Y el valor de la segunda variable es: "<<b<<endl;
	
	
	return 0;
}
