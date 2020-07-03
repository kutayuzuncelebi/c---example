#include <iostream>

using namespace std;

int main ()
{
	int es;
	do
	{
		cout<<"Eleman Sayisi [0-100 Arasi] : ";
		cin>>es;
		
	}
	while (es<1 && es>100);
	int sayilar[100];
	for (int i=0; i<es; i++)
	do
	{
		cout<<i+1<<".pozitif sayi = ";
		cin>>sayilar[i];
		
	}
	while (sayilar[i]<1);
	double toplam=0;
	for(int i=0; i<es; i++)
	toplam+=1.0/sayilar[i];
	double ort = es/toplam;
	cout<<"Ortalama = "<<ort;
	
	int d;
	cin>>d;
	
}
