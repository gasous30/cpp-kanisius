#include "stdio.h"
#include <iostream>
using namespace std;

float berat_jenis(float w, float v)
{
	float hasil;
	return (w/v);
}
main ()
{
	float w,v,hasil;
		cout<<"\n\t Program Penghitung Berat Jenis \n";
		cout<<"\n\t ============================== \n";
		cout<<"\n\t Masukkan Berat Benda : ";
		cin>>w;
		cout<<"\n\t Masukkan Volume Benda : ";
		cin>>v;
		
		hasil=berat_jenis(w,v);
		cout<<"\n\t Berat Jenisnya adalah : "<<hasil<<endl;
		
	return 0;
}
