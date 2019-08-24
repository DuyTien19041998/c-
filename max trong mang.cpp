#include<iostream>
using namespace std;

void ARRMax( int n, int a[])
{
	int max = 0;
	for( int i= 1; i < n; i++)
	{
		if( a[i] >max) max = a[i];
	}
	cout<<max<<endl;
}
int main()
{
	int n=5;
	int a[5] = { 1,2,3,4,5};
	ARRMax(n,a);
	
	return 0;
	
}
