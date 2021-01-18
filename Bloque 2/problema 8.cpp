/*8. Escriba un programa que lea de la entrada estandar los dos
catetos de un triangulo rectangulo y escriba en la
salida estandar su hipotenusa*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float c1,c2,hipotenusa;
	
	cout<<"Escriba el cateto 1: "; cin>>c1;
	cout<<"Escriba el cateto 2: "; cin>>c2;
	
	hipotenusa = (c1*c1)+(c2*c2);	
	hipotenusa = sqrt(hipotenusa);
	
	cout<<"\n La hipotenusa es de: "<<hipotenusa<<endl;
	
	return 0;
}
