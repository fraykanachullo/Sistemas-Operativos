#include<iostream>
using  namespace std;
main(void){
	// tipos de datos en C y C++
	int a; // variable a
	int b; // variable b
	
	//asignacion de variables a las variables
	
	a=9;
	b=5;
	
	int c; // variable c
	
	c=a+b;
	
	cout<<"valor de la variable a: "<<a<<endl;
	cout<<"valor de la variable b: "<<b<<endl;
	cout<<"valor de la variable c: "<<c<<endl;
	cout<<"============================="<<endl;
	//El operador de "desreferenciacion nos permite  visualizar la direccion de memoria que nos ocupa de una variable. "
	cout<<"La direccion de memoria de la variable a es: "<< &a<<endl; 
	cout<<"La direccion de memoria de la variable b es: "<< &b<<endl; 
	cout<<"La direccion de memoria de la variable c es: "<< &c<<endl; 
	
	

}
