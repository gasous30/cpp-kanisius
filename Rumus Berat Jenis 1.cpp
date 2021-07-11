#include "stdio.h"
#include <iostream>
using namespace std;

float berat_jenis (float rho, float g)
{
	float hasil;
	return (rho*g);
}
main ()
{
	float rho,g,hasil;
		cout<<"\n\t Program Penghitung Berat Jenis \n";
		cout<<"\n\t ------------------------------ \n";
		cout<<"Masukkan Massa Jenis Benda : ";
		cin>>rho;
		cout<<"Masukkan Percepatan Gravitasi : ";
		cin>>g;
		
		hasil=berat_jenis(rho,g);
		cout<<"Berat Jenis bendanya adalah : "<<hasil<<endl;
		
	return 0;
}
