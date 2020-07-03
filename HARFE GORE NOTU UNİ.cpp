#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
	char notu;
	cout<<"Notunuz [A,B,C,D,F] :";
	cin>>notu;
	switch(notu)
	{
		case 'A':cout<<"100 ile 91 Arasindadir notunuz. "<<endl;break;
		case 'B':cout<<"90 ile 81 Arasindadir notunuz. "<<endl;break;
		case 'C':cout<<"80 ile 71 Arasindadir notunuz. "<<endl;break;
		case 'D':cout<<"70 ile 61 Arasindadir notunuz. "<<endl;break;
		case 'F':cout<<"60 ile 91 Arasindadir notunuz.  "<<endl;break;
		default:cout<<"Hatali Giris.Lutfen Buyuk Harf Olmasina Dýkkat Ediniz. ";break;
	}
	
	int d;
	cin>>d;
}
