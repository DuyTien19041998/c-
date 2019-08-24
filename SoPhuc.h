#include<iostream>
class SoPhuc{
	private:
		double phanThuc, phanAo;
	public:
		SoPhuc();
		SoPhuc(double,double);
		double getPhanThuc();
		void setPhanThuc(double);
		double getPhanAo();
		void setPhanAo(double);
		void Nhap();
		void Xuat();
		SoPhuc tinhCong(SoPhuc);
		SoPhuc tinhTru(SoPhuc);
		SoPhuc tinhNhan(SoPhuc);
		SoPhuc tinhChia(SoPhuc);
};
