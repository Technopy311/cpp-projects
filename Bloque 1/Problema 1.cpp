/*
1. Escribe un programa que lea la entrada estandar de dos numeros y muestre la salida estandar
su suma, resta, multiplicacion y division.
*/

#include<iostream>

using namespace std;

int main(){
	int numeroA = 0;
	int numeroB = 0;
	
	cout<<"Ingrese el primer numero entero al cual aplicarle operatoria basica: ";
	cin>>numeroA;
	cout<<"Ingrese el segundo numero entero al cual aplicarle operatoria básica: ";
	cin>>numeroB;
	cout<<"\n";
	
	int suma = numeroA + numeroB;
	int resta = numeroA - numeroB;
	int division = numeroA / numeroB;
	int multiplicacion = numeroA * numeroB;
	
	cout<<"Los numeros sumados son: "<<suma<<"\n";
	cout<<"Los numeros restados son: "<<resta<<"\n";
	cout<<"Los numeros divididos son: "<<division<<"\n";
	cout<<"Los numeros multiplicados son: "<<multiplicacion<<"\n";
	cout<<"\n";
	
	
	return 0;
}
