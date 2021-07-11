#include "stdio.h"
#include <iostream>
using namespace std;
float gaya (float m,float a)
{
	float hasil;
	return (m*a);
}
main()
{
	float m, a, hasil;
	
		cout<<"\n\t\t Program Penghitung Rumus Gaya Berdasarkan Hk II Newton \n";
		cout<<"\n\t\t------------------------------------------------------- \n";
		cout<<"\t Masukkan nilai massa : ";
		cin>>m;
		cout<<"\t Masukkan nilai percepatan : ";
		cin>>a;
		
		hasil=gaya(m,a);
		cout<<"\t Nilai gayanya adalah : "<<hasil<<endl;
		return 0;
	}
	

