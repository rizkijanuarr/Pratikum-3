#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
 int nilai;
system ("color 0B");
cout<<"Nama		: Rizki Januar Irmansyah "<<endl;
cout<<"NIM		: 20051397046 "<<endl;
cout<<"Kelas		: Manajamen Informatika 2020B"<<endl;
cout<<"======================================================\n";
cout<<"        PROGRAM BENTUK SEGITIGA SIKU-SIKU ANGKA       \n";
cout<<"======================================================\n";
cout<<"Masukan Segitiga Angka : ";cin>>nilai;
cout<<endl;
cout<<"SEGITIGA ANGKA"<<endl;
cout<<endl;
    for(int a=1; a<=(nilai*2)-1; a++)
    {
     if (a <= nilai){
     for(int b = 1; b <= a; b++)
            cout<<b;
        }else{
        for(int c = 1; c <=nilai*2-a; c++)
            cout<<c;
     }
        cout<<endl;
    }
}
