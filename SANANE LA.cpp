#include <iostream>

using namespace std;

int main ()
{
	int tekrar;
	cout<<"Kac Defa Ekrana Yazdirmak Istiyorsun : ";
	cin>>tekrar;
	char isim[10];
	cout<<"Hangi Ismi Yazdirmak İstiyorsun : ";
	cin>>isim;
	int i;
	for (int i=0; i<tekrar; i++)
	{
		for(int j=0; j<i; j++)
		cout<<" ";
		cout<<isim<<endl;
		
	}
	int d;
	cin>>d;
	
}
