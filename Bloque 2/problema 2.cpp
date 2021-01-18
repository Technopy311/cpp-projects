/*Escribe la siguiente expresion
matematica como expresion en c++*/

//b. a+b/c+b

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	
	cout<<"Ingrese a: "; cin>>a;
	cout<<"Ingrese b: "; cin>>b;
	cout<<"Ingrese c: "; cin>>c;
	cout<<"Ingrese d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}
