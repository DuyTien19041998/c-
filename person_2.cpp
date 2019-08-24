#include <iostream>
#include <vector>
#include <string>
using namespace std;

};
class Person{
	private:
	string ten; int tuoi;
	public:
		Person();
		Person(string name,int age){
			ten=name;
			tuoi=age;
		}
		string getTen(){
			return ten;
		}
		int getTuoi(){
			return tuoi;
		}
		void setTen(string t){
			ten=t;
		}
		void setTuoi(int t){
			tuoi=t;
		}
};
class Employee:public Person{
	private:
	float luongCB, luongTangThem,phuCap;
	public:
		Employee();
		Employee(string ten,float tuoi,float luongcb,float luongtt,float phucap):Person(ten,tuoi){
			luongCB=luongcb;
			luongTangThem=luongtt;
			phuCap=phucap;
		}
		void setluongCB(float luong){
			luongCB=luong;
		}
		void setluongTT(float luong){
			luongTangThem=luong;
		}
		void setPC(float pc){
			phuCap=pc;
		}
		float tinhThuNhap(){
			return luongCB+luongTangThem+phuCap;
		}
};
class Manager:public Person{
private:
	vector<Employee> arr;
public:
	Manager();
	Manager(string ten,int tuoi, vector<Employee> s):Person(ten,tuoi){
		arr=s;
	}
	vector <Employee> getS(){
		return arr;
	}
	void setS(vector <Employee> s){
		arr=s;
	}
	Employee thuNhapCaoNhat(){
		Employee s=arr[0];
		for (int i=1;i<arr.size();i++){
			if (arr[i].tinhThuNhap()>s.tinhThuNhap()) s=arr[i];
		}
		return s;
	}
};

int main(){
	int size;
	vector<Employee> danhsach;
	cout<<"Nhap vao so nhan vien: ";
	cin>>size;
	for (int i=0;i<size;i++){
		string ten; float tuoi, luongcb,luongtt, phucap;
		cout<<"\nNhap nhan vien thu "<<i+1<<endl;
		cin.ignore(2000,'\n');
		cout<<"Nhap ten nhan vien: ";
		getline(cin,ten);
		cout<<"Nhap tuoi: ";
		cin>>tuoi;
		cout<<"Nhap luong co ban: ";
		cin>>luongcb;
		cout<<"Nhap luong tang them: ";
		cin>>luongtt;
		cout<<"Nhap luong phu cap: "; cin>>phucap;
		cout<<endl;
		danhsach.push_back(Employee(ten,tuoi,luongcb,luongtt,phucap));
	}
	string ten; int tuoi;
	cout<<"Nhap ten nguoi quan ly: ";
	cin.ignore(2000,'\n');
	getline(cin,ten);
	cout<<"Nhap tuoi nguoi quan ly: ";
	cin>>tuoi;
	Manager ql=Manager(ten,tuoi,danhsach);

	cout<<"Nhan vien co luong cao nhat:\n";
	cout<<"Ten: "<<ql.thuNhapCaoNhat().getTen()<<endl<<"Tuoi: "<<ql.thuNhapCaoNhat().getTuoi()<<endl<<"Muc luong la: "<<ql.thuNhapCaoNhat().tinhThuNhap();


}
