#include <iostream>					//File Header (Bagian prosessor direvtive
using namespace std;
int main()							//bagian deklarasi fungsi main
{
	int panjang, lebar, tinggi, volume;					//bagian definisi
	cout<<"================================"<<endl;		//keluaran
	cout<<"== Program Volume Balok (Cpp) ==\n";
	cout<<"================================"<<endl;
	
cout <<"\nRumus untuk menghitung Volume Persegi Panjang = Panjang x Lebar x Tinggi";

cout<<"\n\nMasukkan Panjang sisi Persegi Panjang : ";

	cin>>panjang;						//input data sisi
	
cout<<"\n\nMasukkan Lebar sisi Persegi Panjang : ";

	cin>>lebar;
	
cout<<"\n\nMasukkan Tinggi sisi Persegi Panjang : ";

	cin>>tinggi;

	volume = panjang*lebar*tinggi;
	
	// Contoh Output Bahasa C++
	cout<<endl<<"Volume Balok = "<<volume;
	
	return 0;
}
