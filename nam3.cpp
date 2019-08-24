#include<iostream>
using namespace std;
void nhapMang(int n, int a[i]){
	cout<<" moi ban nhap vao mang :";
	cin>>a[i];
}
void xuatMang(int n, int a[i]){
	cout<<" mang :";
	cout<<a[i]<<endl;
}
int main(){
	int n;
	cout<<" moi ban nhap vao n :";
	cin>>n;
	int a[10];
	nhapMang(n,a);
	xuatMang(n,a);
	
	
	return 0;
}
