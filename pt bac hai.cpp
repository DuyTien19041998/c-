#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, delta,x1,x2,x;
	cout<<" nhap vao ba gia tri cua phuong trinh bac hai"<<endl;
	cin>>a>>b>>c;
	delta = b*b - 4*a*c;
	cout<<delta<<endl;
	if( delta < 0)
	{
		cout<<" phuong trinh bac hai vo nghiem:"<<endl;
	}
	else if ( delta > 0)
	{
		cout<<" phuong trinh co hai nghiem phan biet:"<<endl;
		x1 = (-b + sqrt(delta))/ 2*a;
		x2 = (-b - sqrt(delta))/ 2*a;
		cout<<" nghiem thu nhat bang:"<<x1<<endl;
		cout<<" nghiem thu hai bang:"<<x2<<endl;
	}
	else if( delta = 0)
	{
		cout<<" phuong trinh co nghiem kep:"<<endl;
		x = -b/2*a;
		cout<<" nghiem kep bang:"<<x<<endl;
	}
	return 0;
}
