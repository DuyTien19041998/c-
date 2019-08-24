#include<iostream>
using namespace std;
bool tangdan( int n, int a[])
{
	if( n ==1) return 1;
	return ( a[n-1] > a[n-2 && tangdan( n-1, a)]);
	return 0;
}
int main()
{
	int n=4;
	int a[]={ 1,2,3,4,5};
	if( tangdan(n,a) > 0) cout<<" mang tang dan"<<endl;
	else cout<<" mang khong tang dan";
	return 0;
}
