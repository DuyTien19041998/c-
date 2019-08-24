#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a, b, c, delt, x1, x2;
	cout<<" nhap a:";
	cin>>a;
	cout<<" nhap b :";
	cin>>b;
	cout<<" nhap c :";
	cin>>c;
	delt=b*b-4*a*c;
	cout<<" delt ="<<delt<<endl;
	if(a==0 && b==0 && c==0){
		cout<<" phuong trinh co vo so nghiem :";
	}
	if( delt <0){
		cout<<" phuong trinh vo nghiem :";
	}
	else if (delt ==0){
		cout<<" phuong trinh co nghiem kep : x="<<(-b/2*a)<<endl;
	}
	else{
		cout<<" phuongw trinh co hai nghiem phan biet :"<<endl;
		x1=(-b+sqrt(delt))/(2*a);
		x2=(-b-sqrt(delt))/(2*a);
		cout<<" x1 ="<<x1<<endl<<" x2 ="<<x2;
	}
	return 0;
}
