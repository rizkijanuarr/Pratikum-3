#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
	int a,b,c;
	system ("color 0B");
    cout<<"Nama      : Rizki Januar Irmansyah "<<endl;
    cout<<"NIM       : 20051397046 "<<endl;
    cout<<"Kelas     : Manajamen Informatika 2020B"<<endl;
    cout<<"====================================================="<<endl;
	cout<<"            PROGRAM TABLE OF MULTIPLICATION "<<endl;
	cout<<"====================================================="<<endl;
	printf("X/Y");
	for(a=1;a<=10;a++)
	printf("%5d" , a);
	for(b=1;b<=10;b++)
	{
		printf("\n   \n  %d",b);
		for(c=1;c<=10;c++)
		    printf("%5d",b*c);
	}
	return 0;
}
