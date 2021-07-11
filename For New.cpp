#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main ()
{
	float rata;
	int i,p,tp;
	tp=0;
	cout<< "\t - Mencari rata - rata pengunjung wisata -\n";
	cout<< "\t==========================================\n";
for (i=1;i<=4;i++)
{

	cout <<"Pengunjung Hari Ke "<<i<<" Berjumlah : "; cin>>p;
	tp=tp+p;
}
cout<<"\t================================\n";
cout<<"\t Total Pengunjung : "<<tp<<endl;
rata=tp/(i-1);
cout<<"\t Rata-rata kunjungan per hari : "<<rata<<endl;

getch();}
