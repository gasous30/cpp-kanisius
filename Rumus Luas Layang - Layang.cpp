#include "stdio.h"
#include <iostream>
#include <conio.h>
using namespace std;

float luas_layang (float d1, float d2)
{
	float hasil;
	return (d1*d2/2);
}
main()
{
	float d1,d2,hasil;
	cout<<"\n\t Program Penghitung Luas Layang - Layang \n";
	cout<<"\n\t --------------------------------------- \n";
	cout<<"Masukkan Panjang Diagonal 1 : ";
	cin>>d1;
	cout<<"Masukkan Panjang Diagonal 2 : ";
	cin>>d2;
	
	hasil=luas_layang(d1,d2);
	cout<<"Luas nya adalah : "<<hasil<<endl;
	
	if (hasil>1000)
		{cout<<"Cetak Layang - Layang Besar Sekali";}
		else if (hasil>=100)
			{cout<<"Cetak Layang - Layang Sedang";}
				else
					{cout<<"Cetak Layang - Layang Kecil";}
					
	
	getch ();
}

