#include<iostream>
using namespace std;
#define MAX 100
int* NhapMang(int A[MAX], int n)
{
	for(int i= 0; i<n;i++)
	{
		cin>>A[i];
	}
	return A;
}

void Xuat(int A[MAX], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<A[i]<<"  ";	
	}
}

int kiemTraSoChinhPhuong(int n)
{
  int i=0;
  while(i*i<n) ++i;
  return (i*i==n);
}
int main()
{
	int A[MAX];
	cout<<"nhap vao so luong phan tu cua mang A: ";
	int n;
	cin>>n;
	cout<<"Bat dau nhap day so: ";
	NhapMang(A, n);
	cout<<"day so A:\n";
	Xuat(A,n);
	
	cout<<"\nSo chinh phuong: \n";
	for(int i=0; i<=n;i++)
	{
		if(kiemTraSoChinhPhuong(A[i])==1) cout<<A[i]<<" ";
	}
}
