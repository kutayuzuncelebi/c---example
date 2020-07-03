#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Denklemin Katsayilirini Giriniz :";
	cin>>a>>b>>c;
	double delta=(b*b) - (4*a*c);
	if (delta<0) cout<<"Gercek Kok Yoktur. ";
	else if(delta=0)
	{
		double x;
		x=-b/(2.0*a);
		cout<<"Kok = "<<x;
		
	}
	else {
		double x1,x2;
		x1=(-b-sqrt(delta)/2.0*a);
		x2=(-b+sqrt(delta)/2.0*a);
		cout<<"Kok 1 = "<<x1<<endl;
		cout<<"Kok 2 = "<<x2;
		
	}
	int d;
	cin>>d;
	
	
}
