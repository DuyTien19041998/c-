#include "sinhvien.h"
#include "ngay.h"
/*
  <kien du lieu> <tenlop> :: <ten phuong thuc>
  */
  void sinhvien::nhap()
  {
  	fflush(stdin);
  	cout<<"\n nhap ten ";
  	getline(cin, ten);
  	cout<<"\n nhap diem toan ";
  	cin>>diemtoan;
  	cout<<" \n nhap diem van ";
  	cin>>diemvan;
  	
  	cout<<endl<<" ngay sinh";
  	ngaysinh.nhap();
  	
  }
  
  void sinhvien::xuat()
  {
  	cout<<" \nten :"<<ten;
  	cout<<" \ndiem toan  :"<<diemtoan;
  	cout<<" \ndiem van  :"<<diemvan;
  	cout<<endl<<" sinh ngay :";
  	sinhngay.xuat();
  	
  }
  
  float sinhvien::tinhdiemtrungbinh()
  {
  	return (diemtoan+diemvan)/2;
  }
