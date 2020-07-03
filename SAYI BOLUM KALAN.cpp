#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int sayi,bolen,islenecek;
	cout<<"Bir Sayi Giriniz : ";
	cin>>sayi;
	cout<<"Bolen Degerini Giriniz :";
	cin>>bolen;
	if (sayi<0)
	islenecek=sayi*-1;
	else islenecek=sayi;
	int bolum=0;
	int kalan=0;
	while(islenecek>0)
	{
		islenecek-=bolen;
		bolum++;
	}	
			if (islenecek !=0)
			{
				islenecek+=bolen;
				bolum--;
			}
		kalan=islenecek;
		cout<<sayi<<endl<<"Sayisinin Bolumu ="<<bolum<<endl<<"Kalani = "<<kalan;
		
	int d;
	cin>>d;
	
	}
