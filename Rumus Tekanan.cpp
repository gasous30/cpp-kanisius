#include "stdio.h"
#include <iostream>
using namespace std;

float tekanan(float f, float a)
{
	float hasil;
	return (f/a);
}
main()
{
	float f, a, hasil;
		cout<<"\n\t -------------------------- \n";
		cout<<"\n\t Program Penghitung Tekanan \n";
		cout<<"\n\t -------------------------- \n";
		cout<<"Masukkan Besar Gaya : ";
		cin>>f;
		cout<<"Masukkan Luas Penampang : ";
		cin>>a;
		
	hasil=tekanan(f,a);
	cout<<"Tekanannya Adalah : "<<hasil<<endl;
	
return 0;
	
}
