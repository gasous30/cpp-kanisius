#include "stdio.h"
#include <iostream>
using namespace std;

float gesek (float myu, float n)
{
	float hasil;
	return (myu*n);
}
main ()
{
	float myu,n,hasil;
		cout<<"\n\t Program Penghitung Besar Gaya Gesek Dengan Koefisian Gaya Gesek \n";
		cout<<"\n\t --------------------------------------------------------------- \n";
		cout<<"\t Masukkan Koefisien Gesek : ";
		cin>>myu;
		cout<<"\t Masukkan Gaya Normal : ";
		cin>>n;
		
		hasil=gesek(myu,n);
		cout<<"\n\t Nilai Gaya Geseknya adalah : "<<hasil<<endl;
		
		return 0;
}
