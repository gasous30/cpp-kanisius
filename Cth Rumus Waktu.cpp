#include "stdio.h"
#include <iostream>
using namespace std;

// Mendefinisikan fungsi
float waktu (float s,float v)
{
 float hasil;
 return (s/v);
}
 main()
{
 float s,v,hasil;

      cout << "\n\t\t - Program Menghitung Jarak (GLB) -\n";
      cout << "\t============================================\n\n";

      cout <<"\t Masukkan nilai jarak : ";
      cin >> s;
      cout <<"\t Masukkan nilai kecepatan : ";
      cin >> v;

      hasil=waktu(s,v);
      cout <<"\t Waktu yang dtempuh oleh kendaraan adalah "<<hasil<<endl;

      cout << "\t============================================n\n";
      return 0;
}

