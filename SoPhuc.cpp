
#include "SoPhuc.h"
using namespace std;
SoPhuc::SoPhuc(){
	phanAo = phanThuc = 0;
}
SoPhuc::SoPhuc(double phanThuc, double phanAo){
	this->phanThuc = phanThuc;
	this->phanAo = phanAo;
}
double SoPhuc::getPhanThuc(){
	return phanThuc;
}
double SoPhuc::getPhanAo(){
	return phanAo;
}
void SoPhuc::setPhanThuc(double phanThuc){
	this->phanThuc = phanThuc;
}
void SoPhuc::setPhanAo(double phanAo){
	this->phanAo = phanAo;
}
void SoPhuc::Nhap(){
	double t, a;
	cout<<"Nhap phan thuc: ";
	cin>>t;
	cout<<"Nhap phan ao: ";
	cin>>a;
	SoPhuc complex(t, a);
}
void SoPhuc::Xuat(){
	SoPhuc c; 
	cout<<c.getPhanThuc()<<"+"<<c.getPhanAo()<<"i"<<endl<<endl;
}
