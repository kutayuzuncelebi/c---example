#include <iostream>

using namespace std;

int main()
{
	int sayi;
	cout<<"Tek Basamakli Pozitif Sayi Giriniz :";
	cin>>sayi;
	if (sayi == 0) cout<<"sifir";
	else if(sayi == 1) cout<<"-->bir";
	else if(sayi == 2) cout<<"-->iki";
	else if(sayi == 3) cout<<"-->uc";
	else if(sayi == 4) cout<<"-->dort";
	else if(sayi == 5) cout<<"-->bes";
	else if(sayi == 6) cout<<"-->alti";
	else if(sayi == 7) cout<<"-->yedi";
	else if(sayi == 8) cout<<"-->sekiz";
	else if(sayi == 9) cout<<"-->dokuz";
	else cout<<"Hatali Giris.LUtfen Programdan Cikip 0-9 Arasinda Bir Sayi Giriniz. ";
	
	int d;
	cin>>d;
	return 0;
	
}
