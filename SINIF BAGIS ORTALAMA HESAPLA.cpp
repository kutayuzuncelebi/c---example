#include <iostream>

using namespace std;

int main()
{
	int os;
	cout<<"Ogrenci Sayisi Gir : ";
	cin>>os;
	int bagis;
	int kasa=0;
	for (int i=0; i<os; i++)
	{
		cout<<"Ne Kadar Bagis Yapacak :";
		cin>>bagis;
		kasa=kasa+bagis;
	}
	cout<<"Toplanan : "<<kasa<<endl;
	double ort=kasa*1.0/os;
	cout<<"Kisi Basi : "<<ort<<endl;
	
	int d;
	cin>>d;
	
}
