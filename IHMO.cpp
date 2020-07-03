#include <iostream>

using namespace std;

int main( )
{
	char isim[80][20];
	int os;
	cout<<"Ogrenci Sayisi Giriniz : ";
	cin>>os;
		for (int i=0; i<os; i++)
		{
			cout<<i+1<<".Ogrenci Adi : ";
			cin>>isim[i];
			
		}
		int ihmo=0;
		for (int i=0; i<os; i++)
		if (isim[i][0]=='m')
		ihmo++;
		cout<<" m harfil ile baslayan Ogrenci Sayisi : "<<ihmo;
		
		int d;
		cin>>d;
		
	

}
