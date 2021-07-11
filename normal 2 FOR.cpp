#include <iostream>
#include <conio.h>
using namespace std;

int bil, a;
main ()
{
	a=5;
	for (bil=-1;bil<=4;bil+=1)
	{
		
		cout<<a<<"   ";
		
		a=a+bil*bil;
	}
}

