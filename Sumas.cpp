// Sumas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;
void main ()
{	int n;
	float num, suma=0;
	cout<< "ingrese el nummero de numeros";
	cin>>n;

	for(int i=1; i<=n; i++)	
	{	cout<<"introduzca numero:";
		cin>>num;
		suma=suma+num;
	}

	cout<<"la suma es:"<<suma<<endl;
	getch();
}
	



