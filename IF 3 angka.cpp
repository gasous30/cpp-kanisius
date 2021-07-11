#include<iostream>
#include<conio.h>
using namespace std;
main()
{int a, b, c;
cout<<"Masukkan Nilai a = ";cin>>a;
cout<<"Masukkan Nilai b = ";cin>>b;
cout<<"Masukkan Nilai c = ";cin>>c;

if (a>b)
	{if (a>c)
		{cout<<" terbesar "<<a;
		if (b>c)
		{cout<<" terkecil "<<c;}
		else
		{cout<<" terkecil "<<b;}}}

if (b>c)
	{if (b>a)
		{cout<<" terbesar "<<b;
		if (c>a)
		{cout<<" terkecil "<<a;}
		else
		{cout<<" terkecil "<<c;}}}
		
if (c>b)
	{if (c>a)
		{cout<<" terbesar "<<c;
		if (b>a)
		{cout<<" terkecil "<<a;}
		else
		{cout<<" terkecil "<<b;}}}
getch ();
}
