#include<iostream>
using namespace std;
 

int main()
{
	int n;
	cout<<"Nhap so n: ";
	cin>>n;
	cout<<"tat ca so nguyen to nho hon hoac bang n la: ";
	int i,j;
	
	for( i = 2; i <= n; i++)
	{
		for( j = 2; j <= i; j++)
		{	
			if(i % j == 0) {
				cout<< i <<"  ";
			}	
		}
	}
	return 0;
	
}
