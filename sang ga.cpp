#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSIZE 100
struct TH
{
	int MaT;
	char TenT[50];
	int NTL;
};
typedef TH DataTypeItem;
void NhapTruong(DataTypeItem &x);
void XuatTruong(DataTypeItem x);
void NhapDanhSachTruong(DataTypeItem a[],int &n);
void XuatDanhSachTruong(DataTypeItem a[],int n);
void TimTheoMaT(DataTypeItem a[],int n,int x);
int TimTheoTenT(DataTypeItem a[],int n,char ten[]);
void Interchange_SapXepTangTheoMaT(DataTypeItem a[],int n);
void Insertion_SapXepTangTheoTenT(DataTypeItem a[],int n,char s1[],char s2[]);
int main()
{
	DataTypeItem a[MAXSIZE];
	int n,x,kq;
	char y[50];
	NhapDanhSachTruong(a,n);
	printf("Danh sach truong la:");
	XuatDanhSachTruong(a,n);
	//=================================================================
	//printf("\nVui long nhap ten truong can tim:");
	//gets_s(y);
	//fflush(stdin);
	//kq=TimTheoTenT(a,n,y);
	//if(kq==-1)
	//	printf("ko co truong hoc ban can tim");
	//else
	//{
	//	printf("Truong ma ban can tim la:");
	//	XuatTruong(a[kq]);
	//}
	////=================================================================
	//printf("\nVui long nhap ma truong can tim:");
	//scanf_s("%d",&x);
	//TimTheoMaT(a,n,x);
	////=================================================================
	//printf("\nDa sap xep tang theo ma truong:");
	//Interchange_SapXepTangTheoMaT(a,n);
	//XuatDanhSachTruong(a,n);
	//=================================================================
	char s1[MAXSIZE], s2[MAXSIZE];
    /*scanf("%s%s", s1, s2);
	printf("%d", SoSanhChuoi(s1, s2));*/
	printf("\nDa sap xep tang theo ten truong:");
	Insertion_SapXepTangTheoTenT(a,n,s1,s2);
	XuatDanhSachTruong(a,n);
	_getch();
}
void NhapTruong(DataTypeItem &x)
{
	printf("Nhap Ma Truong:");
	scanf("%d",&x.MaT);
	fflush(stdin);
	printf("Nhap Ten Truong:");
	gets(x.TenT);
	fflush(stdin);
	printf("Nhap nam thanh lap truong:");
	scanf("%d",&x.NTL);
	fflush(stdin);
}
void XuatTruong(DataTypeItem x)
{
	printf("\t\t%d \t\t\t%-10s\t\t\t%d",x.MaT,x.TenT,x.NTL);
}
void NhapDanhSachTruong(DataTypeItem a[],int &n)
{
	do{
		printf("\nCho biet so luong truong :");
		scanf("%d",&n);
	}while (n<=0);
	for(int i=0;i<n;i++)
		NhapTruong(a[i]);
}
void XuatDanhSachTruong(DataTypeItem a[],int n)
{
	printf("\n\t\t\t\t\t======DANH SACH TRUONG HOC=====");
	printf("\n\t\tSTT\t\t\tMa Truong \t\tTen Truong\t\tNam Thanh Lap");
	for(int i=0;i<n;i++)
	{
		printf("\n\t\t%d\t",i+1);
		XuatTruong(a[i]);
	}
}
void TimTheoMaT(DataTypeItem a[],int n,int x)
{
	int t=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].MaT==a[t].MaT)
		{
			i=t;
		}
	}
	printf("Truog can tim la:\t");
	XuatTruong(a[t]);
}
int TimTheoTenT(DataTypeItem a[],int n,char ten[])
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].TenT,ten)==0)
			return i;
	}
	return -1;
}
void Swap(DataTypeItem &x,DataTypeItem &y)
{
	DataTypeItem t;
	t=x;
	x=y;
	y=t;
}
void Interchange_SapXepTangTheoMaT(DataTypeItem a[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].MaT>a[j].MaT)
				Swap(a[i],a[j]);
}
int SoSanhChuoi(char *s1, char *s2)
{
	int i = 0;
	do
	{
		if (s1[i] > s2[i])
			return 1;
		else if (s1[i] < s2[i])
			return -1;
		i++;
	} while (s1[i] != '\0' || s2[i] != '\0');
	
	return s1[i]-s2[i];
}
void Insertion_SapXepTangTheoTenT(DataTypeItem a[],int n,char s1[],char s2[])
{
	/*char s1[MAXSIZE],s2[MAXSIZE];*/
	int j;
	for(int i=1;i<n;i++)
	{
		DataTypeItem x=a[i];
		for(int j=i-1;j>=0;j--)
			if(SoSanhChuoi(s1,s2)==1)
			{
				a[j+1]=a[j];
			}
			else
				break;
		a[j+1]=x;

	}
}
