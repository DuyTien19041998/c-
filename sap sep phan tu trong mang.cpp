#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;

void NhapMang( int a[], int n)
{
	for( int i =0; i<n; i++)
	{
		cout<<" nhap phan tu thu a["<<i<<"] =";
		cin>>a[i];
	}
}
void XuatMang( int a[], int n)
{
	cout<<endl;
	for( int i =0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}

 }
 
 void Swap( int &a, int &b)
 {
 	int temp =a;
 	a =b;
 	temp =b;
 }
 
 void Quicksort(  int a[], int left, int right)
 {
 	int i =left;
 	int j = right;
 	 int pivot;
 	 pivot = ( right+ left)/2;
 	 while( pivot > a[i]){
 	 	i++;
	  }
	  
	  while( a[i] > pivot)
	  {
	  	j--;
	  	if( i<=j)
	  	{
	  		swap(a[i],a[j]);
	  		i++;
	  		j--;
		  }
	  }
	  if( left <j)
	  {
	  	Quicksort(a,left,j);
	  }
	  if( i<right)
	  {
	  	Quicksort(a,i, right);
	  }
 	
 }
 

int main()

{
	int n ;
	cout<<"nhap vao n";
	cin>>n;
	Nhapmang(a,n);
	cout<<" mang vua nhap vao la:";
	Xuatmang(a,n);
	cout<<" mang duoc sap xep la:";
	
	Quicksort(a,0,n-1);
	return 0;
	

	
}
