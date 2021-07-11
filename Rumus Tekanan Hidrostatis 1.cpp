#include "stdio.h"
#include <iostream>
#include <conio.h>
using namespace std;

float tekanan_h(float rho, float g, float h)
{
	float hasil;
	return (rho*g*h);
}
main()
{
	float rho,g,h,hasil;
	cout<<"\n\t -------------------------------------- \n";
	cout<<"\n\t Program Penghitung Tekanan Hidrostatis \n";
	cout<<"\n\t -------------------------------------- \n";
	cout<<"\n Masukkan Besar Massa Jenis Cairan : ";
	cin>>rho;
	cout<<"\n Masukkan Besar Percepatan Gravitasi : ";
	cin>>g;
	cout<<"\n Masukkan Besar Kedalaman Benda : ";
	cin>>h;
	
	hasil=tekanan_h(rho,g,h);
	
	cout<<"\n Tekanan Hidrostatisnya Adalah : "<<hasil<<endl;
	
getch();	
}

