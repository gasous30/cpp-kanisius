#include <iostream>
#include <conio.h>
using namespace std;

int a,b;						//var a menyatakan berapa kali diulang,var b menyatakan isinya
main()
{
	for (a=4;a>=1;a-=1)			//a = 4 s/d 1, menyatakan jumlah baris
	{							//kurung pembuka for a
		for (b=1;b<=3;b+=1)		//b = 1 s/d 3, menyatakan jumlah kolomnya
		{						//kurung pembuka for b
			cout<<a<<"  ";		//cetak a apabila dalam 1 baris angkanya sama
		}						//kurung penutup for b
		cout<<endl;
	}							//kurung penutup for a
getch();
}
