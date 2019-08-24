#include<iostream>
#include<conio.h>
using namespace std;

// xoa phan tu trong mang
void Del( int k, int n, int a[]){
	for( int i = k; i < n; i++)
	a[i] = a[i+1];
	n--;
}

// chen phan tu trong mang
void Ins(int &n, int k, int x, int a[]){
	for( int i= n+1; i>k;i--)
	{
		a[i]=a[i-1];
		
	}
	a[k] = x;
	n++;
	
}

// in so phan tu trong mang
void In( int n, int a[]){
	for( int i =1; i<= n; i++)
	{
		cout<<a[i]<<"   ";
		
	}
	cout<<endl;
}
// thuat toan sap xep
// chay tu 1 den n-1
void Bubblesort( int n, int a[])
{
	for( int i = 1; i< n; i++)
	{
		for( int j = n; j > i; j--)
		{
			if( a[ j] < a[j -1])
			
			swap(a[j], a[j-1]);
		}
	
	}
	//cout<<endl;
	
}

// thuat toan sap xep chon(selection_sort)
void selectionsort ( int n, int a[])
{
	for( int i=1; i < n; i++)
	{
		int min = a[i], min_pos =i;
		   for( int j =i +1; j <=n; j++)
		   if(a[j]<min)
		   {
		   	min= a[j];
		   	min_pos = j;
		   	
		   }
		   swap(a[i],a[min_pos]);
	}
}

// thuat toan Quicksort con duoc goi laf kieu phan doan(partition sort)
// b1: chon 1 phan tu lam phan tu chot(pivot)
// b2: lay cac phan tu nho hon chot chuyen va phia truoc chot , cac phan tu lon hon chot day ve phia sau chot
// b3; cuoi cung se tao thanh hai mang con. vi tri nam giua hai mang con nay  chinh laf gia tri chot
// b4: thuc hien tuong tu cho hai day con vua tao ra cho den kho day duoc sap xep hoan toan
// 

void Quick_sort( int left , int right , int a[] )
{
	int pivot = a[(left + right)/2];
	int i = left ;
	int  j = right;
	
	while( i < j)
	{
		while( a[i] < pivot) i++;
		while( a[j] > pivot) j--;
		if( i<= j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
			
		}
		
	}
	if( left < j) Quick_sort(left, j, a);
	if(right > i) Quick_sort(i,right, a);
	
}
// lam bai tap 1->9
int main()
{
	int n =8;
	int a[9] = {0, 5,8,12,15,2,7,6,4};
	//Del(3,n,a);
//	In(n,a);
//	Ins(n ,4,1000,a);
//	In(n,a);
//    Bubblesort(n,a);
//     In(n,a);
//      selectionsort(n,a);
//      In(n,a);
       Quick_sort(1,8,a);
       In(n,a);
     
	return 0;
}
