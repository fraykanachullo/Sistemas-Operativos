#include<iostream>

using  namespace std;

// ======================= PUNTEROS =============//
/*  */

main(void){

//declaramos una variable normal denominada "x" de tipo entero
	int x;
	x=8;//asignamos un 8 al valor de x pero no hacemos nada con el
	
	//declaramos un puntero a int
	int *ptr;
	ptr=&x; // guardamos la direccion "x" en le puntero
	
	
	cout<<"la direccion de x es :" << &x;// mostramos la direccion de x., algo como 0x6ffe14
	cout<<endl;// salto de linia 
	cout<<"el valor del puntero ptr es: "<<ptr;// mostramos la direccion de x., algo como 0x6ffe14
	cout<<endl;// salto de linia ¿
	cout<<"la direccion puntero ptr:" <<&ptr;// elñ punteo coomo tal tambien tiene su direccion
	// de memoria  y aqui mostramos , algo como 0x6ffe00
	
	



}
