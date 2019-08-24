#include<iostream>
#include<iomanip >
using namespace std;
int main(){
	cout<<" CHI TIEU:"<<endl<<"=========="<<endl;
	cout<<setiosflags(ios::showpoint)<<setprecision(2);
	cout<<" sach vo:"<<setw(20)<<123.456<<endl;
	cout<<" thuc an:"<<setw(20)<<2453.6<<endl;
	cout<<" quan ao lanh:"<<setw(15)<<3200.0<<endl;
	return 0;


}
