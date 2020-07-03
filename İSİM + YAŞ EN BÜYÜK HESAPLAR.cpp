#include <iostream>


using namespace std;

int main()
{
	char isim[80][20];
	int yas[80];
	int os;
	cout<<"Ogrenci sayisi : ";
	cin>>os;
	for (int i=0; i<os;i++)
	{
		cout<<i+1<<".ogrencinin ismi : ";
		cin>>isim[i];
		cout<<i+1<<".ogrencinin yasi : ";
		cin>>yas[i];
		
	}
	int toplam = 0;
	for (int i=0;i<os;i++)
	if(isim[i][0] == 'a') toplam += yas[i];
	
	cout<<"toplam : "<<toplam<<endl;
	
	int eb = 0;
	for (int i=0;i<os;i++)
	{
		cout<<i<<"  "<<eb<<" "<<yas[i]<<" "<<yas[eb]<<endl;
		if(yas[i]>yas[eb]) eb = i;
	}
		cout<<"En buyuk yasin ismi : "<<isim[eb];
	
	
	
	/* char isim[20];
	
	cout<<"Isminiz : ";
	cin>>isim;
	
	int uzunluk = 0;
	for(;isim[uzunluk] != '\0'; uzunluk++);
	
	cout<<isim<<"Uzunlugu : "<<uzunluk<<endl;
	
	if(isim[0]=='m') cout<<isim<<" m harfi ile baslar"<<endl;
	else cout<<isim<<"m harfi ile baslamaz"<<endl;
	
	int i;
	for(i=1;isim[i]!='\0';i++)
	if (isim[i]=='m') break;
	if (i!=uzunluk) cout<<isim<<" "<<i<<". karakteri m dir"<<endl;
	else cout<<isim<<" de m harfi yoktur";
	*/
	
	

	
	int d;
	cin>>d;
	
}

