#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
	int sayi;
	cout<<"Iki Basamakli Bir Sayi Giriniz :";
	cin>>sayi;
	int onlar=sayi/10;
	int birler=sayi%10;
	
	if (sayi>1 && sayi<100)
	
	{
		switch(onlar)
		{
		case 1:cout<<"On";break;
		case 2:cout<<"Yirmi";break;
		case 3:cout<<"Otuz";break;
		case 4:cout<<"Kirk";break;
		case 5:cout<<"Elli";break;
		case 6:cout<<"Altmis";break;
		case 7:cout<<"Yetmis";break;
		case 8:cout<<"Seksen";break;
		case 9:cout<<"Doksan";break;
		}
		switch(birler)
		{
		case 1:cout<<"Bir";break;
		case 2:cout<<"Iki";break;
		case 3:cout<<"Uc";break;
		case 4:cout<<"Dort";break;
		case 5:cout<<"Bes";break;
		case 6:cout<<"Alti";break;
		case 7:cout<<"Yedi";break;
		case 8:cout<<"Sekiz";break;
		case 9:cout<<"Dokuz";break;
			
		}
	}
		else cout<<"Lutfen 1-99 Arasinda Bir Sayi Giriniz."<<endl;
		
		int d;
		cin>>d;
		
	}
	
	
