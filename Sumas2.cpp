// Sumas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;
void main ()
{	
	int i=1, num,n,suma=0;
	float num, suma=0;
	cout<< "ingrese el nummero de numeros";
	cin>>n;

	while(i<=n){
		cout<<"introduzca numero: ";
		cin>>num;
		suma=suma+num;
		i++;
	}

	cout<<"la suma es:"<<suma;
	getch();
}
	



