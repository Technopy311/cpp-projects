/*
3. Realice un programa que lea de la entrada estándar 
los siguientes datos de una persona:

	Edad: dato entero.
	Sexo: dato char.
	Altura en metros: dato real.

Tras leer los datos, el programa debe mostrarlos en la salida
estandar.
*/

#include<iostream>

using namespace std;

int main(){
	char nombre[15];
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite el nombre de la persona: "; cin>>nombre;
	cout<<"Digite la edad de "<<nombre<<": "; cin>>edad;
	cout<<"Digite el sexo de la persona, femenino o masculino: "; cin>>sexo;
	cout<<"Digite la altura de "<<nombre<<" en metros: "; cin>>altura;
	
	cout<<endl;
	
	cout<<nombre<<" de la edad de: "<<edad<<" años, \n";
	cout<<"del sexo : "<<sexo<<", tiene la altura de: "<<endl;
	cout<<altura<<" metros.";
	
	return 0;	
}
