#include<iostream>
#define max 100
using namespace std;

void nhap(int a[max], int &n){
	for( int i =0; i< n; i++){
		cin>>a[i];
	}
}
void xuat(int a[max], int &n){
	for(int i =0; i< n;i++){
		cout<<a[i]<<"   ";
	}
	cout<<endl;
}
//void sum(int a[max], int n){
//	int MAX= a[0];
//	for(int i =0; i< n; i++){
//		if(a[i]> MAX) MAX = a[i];
//	}
//	cout<<MAX<<endl;
//}
//void tong(int a[max], int n){
//	int tong =0;
//	for( int i =0; i< n; i++){
//		tong+=a[i];
//	}
//	cout<<tong<<endl;
//}
void sapxeptangdan(int a[], int n){
	int temp;
	for(int i =0; i<n-1; i++){
		for(int j = i+1; j< n; j++){
			if(a[i]>a[j]){// giam dan :a [i] < a[j]
			    temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
}
int main(){
	int a[max];
	int n =5;
	cout<<" nhap vao so phan tu cua mang : ";
	cin>>n;
	nhap(a, n);
	xuat(a,n);
	//sum(a, n);
    //tong(a,n);
	sapxeptangdan(a,n);
	return 0;

}
