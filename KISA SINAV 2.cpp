#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	char isim[20];
	cout<<"Isim giriniz :";
	cin>>isim;
	int uzunluk=0;
	for(;isim[uzunluk] != '\0'; uzunluk++);
		for(int i=0; i<=uzunluk; i++)
			{
				for (int j=0; j <= i; j++)
				{
				
				cout<<isim[j];
				}
			
			cout<<endl;
			}
			for (int i=uzunluk-2; i>=0; i--)
			{
				for(int j=0; j<=i; j++)
				{
					cout<<isim[j];
				}
				cout<<endl;
			}
			
		int d;
		cin>>d;

}
