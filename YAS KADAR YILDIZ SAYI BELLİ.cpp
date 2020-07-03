#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int yas[20];
	int kes;
	cout<<"Klupteki Eleman Sayisi : ";
	cin>>kes;
	for (int i=0; i<kes; i++)
	{
		cout<<i+1<<".elemanin yasi = ";
		cin>>yas[i];
	}
	for (int i=0; i<kes; i++)
	{
		cout<<yas[i]<<" ";
	
		for (int j=0; j<kes; j++)
		
		cout<<"* ";
		cout<<endl;
	}
}

