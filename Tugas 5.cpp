 //meghitung deret dengan penentu//
#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
int a=0, b, c, jumlah=0, i, n;
system ("color 0B");
cout<<"Nama		: Rizki Januar Irmansyah "<<endl;
cout<<"NIM		: 20051397046 "<<endl;
cout<<"Kelas		: Manajamen Informatika 2020B"<<endl;
cout<<"======================================================\n";
cout<<"           Menghitung Jumlah deret Bilangan \n";
cout<<"======================================================\n";
cout<<"Masukkan Bilangan Awal 		: "; cin>>a;
cout<<"Masukkan Beda			: "; cin>>b;
cout<<"Masukkan Jumlah Deret Ke-n	: "; cin>>n;
cout<<"======================================================\n";
cout<<" \n";
cout<<"Deret Yang Ke-"<<n<<"			: ";
cout<<a<<",";
jumlah = jumlah+a;

for (i=0; i<n-1; i++)
{
c = a+b;
a=c;
cout<<c<<",";
jumlah = jumlah + c;
}
cout<<" \n";
cout<<"Jumlah Deret Ke-"<<n<<"		: ";
cout<<jumlah;
getch ();
return 0;
}
