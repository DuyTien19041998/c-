#include "phanso.h"

void phanso::nhap(){
	cout<<" \n nhap vao tu so cua phan so : ";
	cin>>tuso;
		do{
		cout<<" \n nhap mau so : ";
		cin>>mauso;
		if(mauso == 0)
		{
			cout<<" mau so phai khac 0 xin nhap lai:";
		}
	}while( mauso ==0);
	
	
}
void phanso::xuat(){
	cout<<tuso<<"/"<<mauso;
  
}
float phanso::tinhketquaphanso()
{
	return (float)tuso/mauso;
}
int timucln( int a, int b){
	// 3 chia het cho 1 ,3
	// 6 chia het cho 1,2,3,6
	// => ucln cua 3 va 6 : 
	// UCLN cua 3 va 6 : 3
//	if( a < 0)
//	{
//		a*=-1;
//	}
//	if( b< 0)
//	{
//		b*=-1;
//	}
//	int min = a<b?a:b;
//	int max = a>b?a:b;
//	if( max %min ==0){
//		return min;
//	}
//	for( int i = min/2; i>=1; i--){
//		if(min %i ==0 && max%i==0){
//			return i;
//		}
//	}
	
	while( a!=b)
	{
		if( a < b){
			b = b-a;
		}
		else {
			a  = a-b;
		}
	}
	return a;// hay b cung d
}
void phanso::rutgon()
{
	int ucln = timucln(tuso,mauso);
	tuso /=ucln;
	mauso /=ucln;
	
}

















