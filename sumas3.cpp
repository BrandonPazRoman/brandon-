// Sumas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;
void main ()
{	
	int n,numero,mayor=0,menor=128;
	float suma=0, promedio;
	cout<<"Ingrese el numero de elementos: ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cout<<"Ingrese un numero: ";
		cin >>numeros;
		if (mayor<numero)
			mayor=numero;
		if (menor>numero)
			menor=numero;
		suma=suma+numero;
	}
	promedio=suma/n;
	cout <<"El mayor es: "<<mayor<<endl;
	cout <<"El menor es: "<<menor<<endl;
	cout <<"El promedio es: "<<promedio;
	getch();

}
	



