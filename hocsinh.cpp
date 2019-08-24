#include "hocsinh.h"

void hocsinh::nhap()
{
	fflush(stdin);// xoa bo nho dem
	cout<<"\n nhap vao ten :";
	getline( cin, ten);
	do{
		cout<<" \nnhap vao diem toan :";
		cin>>diemtoan;
		if( diemtoan < 0 || diemtoan > 10){
			cout<<" diem toan khong hop le xin nhap lai:";
		}
	}while( diemtoan < 0|| diemtoan >10);
	
	do{
		cout<<" \nnhap vao diem van :";
		cin>>diemvan;
	
		if( diemvan < 0 || diemvan > 10){
			cout<<" diem van khong hop le xin nhap lai:";
		}
	}while( diemvan< 0|| diemvan>10);
}
void hocsinh::xuat()
{
	cout<<"\n ten : "<<ten;
	cout<<"\n diem toan : "<<diemtoan;
	cout<<"\n diem van : "<<diemvan;
	cout<<"\n diem trung binh bang = "<<tinhdiemtrungbinh();
}
float hocsinh::tinhdiemtrungbinh(){
	return (diemtoan+diemvan)/2;
}
