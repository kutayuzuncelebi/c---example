#include <iostream>
#include <math.h>
#include <string>


using namespace std;

int main()
{
	int boy,yas,kilo;
	cout<<"Boyunuz : ";
	cin>>boy;
	cout<<"Yasiniz : ";
	cin>>yas;
	cout<<"Kilonuz : ";
	cin>>kilo;
	int cinsiyet;
	double ikilo;
	cout<<"Cinsiyetiniz (1-Erkek , 2-Kadin) :";
	cin>>cinsiyet;
	if (cinsiyet==1) 
	{
	ikilo=(boy-100)*0,9+(yas/10.0);
	}
	else if (cinsiyet==2) 
	{
	ikilo=(boy-100)*0,8+(yas/10.0);
	}
	/*else ikilo=0;*/
	
	int fark=round(ikilo)-kilo;
	
	if (fark > 0) cout<<fark<<" Kilo Almalisiniz.";
	else if(fark < 0) cout<<fark<<" Kilo Vermelisiniz."; //HATALI BU PROGRAM
	else cout<<"Ýdeal Kilodasýnýz.";
	
	
	int d;
	cin>>d;
}
	
