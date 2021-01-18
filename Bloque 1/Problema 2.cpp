/*2. Escribe un programa que lea de la 
entrada estandar el precio de un 
producto y muestre en la sakuda
estandar el precio del producto al 
aplicarle el IVA*/

#include<iostream>
using namespace std;

int main(){
	
	int precioBase = 0;
	cout<<"#########################################"<<endl;
	cout<<endl;
	cout<<"Calculador de precio bruto (precio + IVA)"<<endl;;
	cout<<endl;
	cout<<"#########################################"<<endl;
	cout<<"Ingrese el precio neto del producto: ";
	cin>>precioBase;
	cout<<endl;
	
	float precioLiquido = (precioBase * 1.19);
	
	cout<<"El precio bruto del producto es: "<<precioLiquido<<endl;
	
	return 0;
}
