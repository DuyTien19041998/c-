#include<iostream>
#include<string>
using namespace std;
class ngay
{
	private:
	int ngay , thang ,nam;
	public :
		void nhap(){
			cout<<endl<<"\n nhap ngay";
			cin>>ngay;
			cout<< " \nnhap thang";
			cin>>thang;
			cout<<" \nnhap nam";
			cin>>nam;
		}
		void xuat(){
			cout<<" ngay ="<<ngay;
			cout<<" thang ="<<thang;
			cout<<" nam ="<<nam;
		}
	
};
class hocsinh {
	private:
		string ten;
		float diemtoan, diemvan;
		ngay ngaysinh;
	public:
		void nhap(){
			fflush(stdin);
			cout<<" \nnhap ten :";
			getline(cin,ten);
			cout<<"\nnhap diem toan =";
		    cin>>diemtoan;
			cout<<"\nnhap diem van";
			cin>>diemvan;
			cout<<" \nnhap ngay sinh ";
			ngaysinh.nhap();
		 
		}
		void xuat(){
			cout<<" \nten"<<ten;
			cout<<"\ndiem toan ="<<diemtoan;
			cout<<"\ndiem van ="<<diemvan;
			cout<<"\nsinh ngay";
			ngaysinh.xuat();
		}
		float tinhtrungbinh(){
			return (diemtoan + diemvan)/2;
		}
		
};

int main(){
	
    hocsinh hs1;
    hocsinh hs2 ;
    hs1.nhap();
    hs1.xuat();
    float dtb = hs1.tinhtrungbinh();
    cout<<endl<<" diem trung binh ="<<dtb<<endl;
     
    hs2.nhap();
    hs2.xuat();
    float dtb2 = hs2.tinhtrungbinh();
	cout<<endl<<" diem trung binh hs2 ="<<dtb2<<endl;

  	return 0;
}

