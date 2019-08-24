#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ba lien ket don

struct SNode
{
	int Info;
	  SNode*Next;
};

struct SList
{
	SNode* Head;
	SNode* Tail;
};

void Init(SList &sl)
{
	sl.Head=NULL;
	sl.Tail=NULL;
}
SNode* CreateSNode(int x)
{
	SNode*p=new SNode;
	p->Info=x;
	return p;
}

// chen tai vi tri dau tien
int InsertTail(SList &sl,SNode*p)
{
	if(p==NULL)
		return 0;
	if(sl.Head==NULL)
		sl.Head=sl.Tail=p;
	else
	{
		sl.Tail->Next=p;
		sl.Tail=p;
	}
	return 1;
}
int Nhap(SList &sl)
{
	Init(sl);
	int n;
	printf("Ban muon nhap bao nhieu node:");
	scanf("%d",&n);
	
	for(int i=0;i<6;i++)
	{
		int x;
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&x);
		SNode*p=CreateSNode(x);
		InsertTail(sl,p);
	
	}

}

void InSNode(SList sl)
{
	if(sl.Head!= NULL)
	
	printf("%4d",sl.Head->Info);
	
	// mi bi sai cua cai InSNode
//	for(SNode* p=sl.Head;p!=NULL;p=p->Next)
//	{
//		
//	}
}

int main()
{
	
	SList sl;
	int n;
     scanf(" gia tri ",n);
	Nhap(sl);
	InSNode(sl);
	getch();
	
}
