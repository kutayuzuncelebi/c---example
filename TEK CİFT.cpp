#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int sayi,islenecek;
	cout<<"Sayi Giriniz :";
	cin>>sayi;
	if (sayi<0)
	islenecek=sayi*-1;
	else islenecek=sayi;
	while (islenecek>0)
	islenecek-=2;
	if (islenecek==0)
	cout<<sayi<<" Sayi Cifttir. ";
	else cout<<sayi<<" Sayi Tektir. ";
	
	int d;
	cin>>d;
	
}
