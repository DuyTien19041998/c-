#include<iostream>
using namespace std;
struct PhanSo{
	int tu;
	int mau;
};
void NhapPhanSo(PhanSo &p){
	cout<<" nhap vao tu so : ";
	cin>>p.tu;
	cout<<" nhap ao mau so : ";
	cin>>p.mau;
}
void XuatPhanSo( PhanSo p){
	cout<<p.tu<<"/"<<p.mau<<endl;
}
int Timucln(int a, int b){
	while( a!=b)
	{
		if( a < b){
			b = b-a;
		}
		else {
			a  = a-b;
		}
	}
	return a;
}
int UCLN( int m , int n){
	m=m>0?m: -m;
	n=n>0?n: -n;
	while( m!=n){
		if( m> n){
			m-=n;
		}
		else {
			n-=m;
		}
	}
	return m;
}
PhanSo rutgon( PhanSo p){
	int ucln = UCLN(p.tu,p.mau);
	p.tu =p.tu/ucln;
	p.mau =p.mau/ucln;
}

PhanSo toigian( PhanSo p){
	PhanSo temp;
	int uclnPS = UCLN(p.tu, p.mau);
	temp.tu = p.tu/uclnPS;
	temp.mau= p.mau/uclnPS;
	if(temp.tu==0)
	temp.mau =0;
	return temp;
}
PhanSo tongPS( PhanSo p1, PhanSo p2){
	PhanSo tong;
	tong.tu = p1.tu*p2.mau + p2.tu*p1.mau;
	tong.mau = p1.mau * p2.mau;
	tong = toigian(tong);
	return tong ;
}
PhanSo HieuPS( PhanSo p1,PhanSo p2){
	PhanSo hieu;
	hieu.tu = p1.tu*p2.mau - p2.tu*p1.mau;
	hieu.mau = p1.mau * p2.mau;
	hieu = toigian(hieu);
	return hieu;
}
int main(){
	PhanSo p;
	PhanSo p1 , p2;
	cout<<" nhap vao phan so 1: "<<endl;
	NhapPhanSo(p1);
	XuatPhanSo(p1);
	cout<<" nhap phan so p2: "<<endl;
	NhapPhanSo(p2);
	XuatPhanSo(p2);
	cout<<" tong cua hai phan so : ";
	PhanSo tong = tongPS(p1,p2);
	XuatPhanSo(tong);
	cout<<endl;

	PhanSo hieu = HieuPS(p1,p2);
	cout<<" hieu cua 2 phan so : "<<endl;
	XuatPhanSo(hieu);
	return 0;
}

