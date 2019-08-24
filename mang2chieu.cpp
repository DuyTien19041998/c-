#include<iostream>
#define max 100
using namespace std;

void nhap( int a[][max], int dong, int cot){
	for(int i =0; i< cot; i++){
		for(int j =0; j<dong; j++){
			cin>>a[i][i];
		}
	}
}
void xuat(int a[][max], int dong, int cot ){
	for(int i =0; i< cot; i++){
		for(int j =0; j<dong; j++){
			cout<<"["<<i<<"]"<<"["<<j<<"] ="<<" "<<a[i][j]<<endl;
		}
		cout<<endl;
	}

}
int main(){
	int a[][max];
	int cot;
	cout<<" nhap vao so cot : ";
	cin>>cot;
	int dong; 
	cout<<"nhap vao so dong : ";
	cin>>dong;
	nhap(a, cot, dong);
	xuat(a, cot, dong);
	
	return 0;

}

