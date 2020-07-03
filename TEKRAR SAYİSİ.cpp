#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int sayi;
	cout<<"Tekrar Sayisi : ";
	cin>>sayi;
	int i=1;
	while(i<=sayi)
	{
		int j=1;
		while(j<=i)
		{
			cout<<"* ";
			j++;
		}
		int k=i;
		while (k<sayi)
		{
			cout<<"+ ";
			k++;
			
		}
		cout<<endl;
		i++;
		
		
		}
		int d;
		cin>>d;
}
