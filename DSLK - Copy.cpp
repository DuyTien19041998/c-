#include<iostream>
#include<conio.h>
using namespace std;

struct nut{
	int data;
	nut* next;
};
typedef nut* tro;

void Them(int x, tro &first){
	tro p = new(nut);
	p -> data = x;
	p -> next = first;
	first = p;
}

void ThemSau(int x, tro&first){
	tro p = new(nut);
	p->data = x;
	p->next = NULL;
	if(first == NULL) first = p;
	else{
		tro q = first;
		while(q ->next) q = q -> next;	
		q -> next = p;
	}
}

void Nhap(tro &first){
	char ch;
	do{
		int x;
		cout<<endl<<"Nhap x = ";
		cin>>x;
		ThemSau(x, first);
		cout<<"Nhan <ESC> de ket thuc nhap!";
		ch = getch();
	}
	while(ch != 27);
}

void In(tro first){
	tro p = first;
	cout<<endl;
	while(p){
		cout<<p -> data<<" ";
		p = p->next;
	}	getch();
}

int Dem(tro first){
	int dem = 0;
	for(tro p = first; p!= NULL; p= p -> next)
		dem++;
	return dem;
}
float TBinh(tro first){
	float s = 0;
	for(tro p = first; p!=NULL;p = p-> next){
		s+= p->data;
	}
	return s/(float)Dem(first);
}

void SapXep( tro &dau){
	for(tro p = dau; p->next!=NULL;p=p->next){
		for(tro q = p->next; q!=NULL; q=q->next){
			if(p->data > q->data){
				swap(p->data,q->data);
			}
		}
	}
	
}

tro CuoiCung(tro dau){
	for(tro p = dau; p->next!=NULL;p=p->next){
		if(p->next->next==NULL) {
			return p->next;
			break;
		}
	}
}

void Noi(tro p, tro &first){
	tro q;
	q = first;
	if(first == NULL) first = p;
	while(q->next) q= q->next;
	q->next = p; 
}
void XoaCuoi( tro &dau){
	tro p = dau;
	tro q;
    while(p->next!=NULL){
		q = p;
		p = p->next;
	}
	q->next=NULL;
	delete (p);
}
void XoaDau(tro &dau){
	tro p = dau;
	if(p){
		dau = p->next;
		delete(p);
	}
	else delete(p);
}

void XoaPTSauTro(tro &dau, int n){
	tro q= dau;
	tro p;
	if(n == q->data) XoaDau(dau);
 	while(q->next->data != n) q = q->next;
			p=q->next;
			q->next = p->next;
		delete(p);
}

void Copy(tro L, tro &dau){
	tro p = L;
	while(p){
		if(p->data%2 == 0){
			ThemSau(p->data, dau);
		}
		p= p->next;
	}
}
void Copy2(tro L, tro &dau){
	tro p = L;
	while (p){
		ThemSau(p->data, dau);
		p = p->next;
	}
}
int Min(tro dau){
	tro p = dau;
	tro min = p;
	while(p){
		if(min->data > p->data){
			min = p;
		}
		p=p->next;
	}
	return min->data;
}

void SapChon(tro &dau, tro &L){
	SapXep(dau);
	Copy2(dau,L);
	while(dau){
		XoaDau(dau);
	}
}

bool Check(int x, tro L){
	tro p = L;
	while(p){
		if(x == p -> data) return true;
		p = p -> next;
	}
	return false;
}

void Giao(tro L1, tro L2){
	tro p = L1;
	while(p){
		if(Check(p -> data,L2))
		
			cout<<p->data<<" ";
			
			p = p-> next;
	}
}


main(){
	//tro p = new(nut);
	//p->data=100;
	//p->next = NULL;
	tro dau = NULL;
	//tro dau1= NULL;
	Nhap(dau);
	In(dau);
	//XoaPTSauTro(dau,6);
	//XoaCuoi(dau);
	//In(dau);
	tro L = NULL;
	//Copy2(dau,L);
	//In(L);
	SapChon(dau,L);
	In(L);
	if(dau == NULL) cout<<"dm dung roi haha";
	else cout<<"sai me roi";
	
//	Noi(p, dau);
//	In(dau);
	//Nhap(dau1);
	//In(dau1);cout<<endl;
	//SapXep(dau);
	//In(dau);
	//cout<<endl<<CuoiCung(dau)->data;
	//Giao(dau,dau1);
	//cout<<endl<<"danh sach co "<<Dem(first)<<" phan tu";
	//cout<<endl<<"Trung binh  = "<<TBinh(first);
}
