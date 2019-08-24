#include<iostream>
using namespace std;
struct PhanSo{
	int tu;
	int mau;
};
void nhap(PhanSo &p){
	cout<<" nhap vao tu so : ";
	cin>>p.tu;
	cout<<" nhap vao mau so : ";
	cin>>p.mau;
}
void xuat(PhanSo p){
	cout<<p.tu<<"/"<<p.mau<<endl;
}
int  hieu( PhanSo p1, PhanSo p2){
	PhanSo hieu;
	hieu.tu = p1.tu*p2.mau - p2.mau*p1.tu;
	hieu.mau=p1.mau*p2.mau;
	return hieu;
}
int main(){
	PhanSo p;
	nhap(p);
	xuat(p);
	PhanSo hieu = hieu(p1,p2);
	cout<<" hieu cua hai phan so : ";
	cout<<hieu<<endl;
	
	return 0;
}

