#include<iostream>
using namespace std;
struct nut{
	int data;
	nut* next;
};
typedef nut* tro;
struct nutKep{
	int data;
	nutKep* toi;
	nutKep* lui;
};
typedef nutKep* troKep;
void bosung(int x,tro &dau){
	tro p = dau;
	tro q = new (nut);
	q->data=x;
	q->next=NULL;
	if(dau == NULL) dau=q;
	else{
		while(p->next) p=p->next;
		p->next=q;
	}
}
void bosungKep(int x,troKep &dau,troKep &cuoi){
	troKep p = dau;
	troKep t = cuoi;
	troKep q = new (nutKep);
	q->data=x;
	q->toi=NULL;
	if(dau == NULL) {
		q->lui = NULL;
		dau=q;
		cuoi=q;
	}
	else{
		while(p->toi) p=p->toi;
		p->toi=q;
		q->lui=p;
		cuoi =q;	
	}
}
void NhapKep(int n,troKep &dau, troKep &cuoi){
	for(int i=0;i < n; i++){
		int x;
		cout<<" x = ";
		cin >> x;
		bosungKep(x,dau,cuoi);
	}
}
void In( tro dau){
	tro p=dau;
	while(p){
		cout<<p->data<<"  ";
		p=p->next;
	}	
}
void In(troKep dau, troKep cuoi){
	troKep p=dau;
	while(p){
		cout<<p->data<<"  ";
		p=p->toi;
	}	
}
void Nhap(int n,tro &dau){
	for(int i=0;i < n; i++){		
		int x;
		cout<<" x = ";
		cin>>x;
		bosung(x,dau);
	}
}
bool ktNT( int n){
	for( int i=2; i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
void copyNT(tro dau,troKep &dau1, troKep &cuoi){
	while(dau){
		if(ktNT(dau->data)==true) bosungKep(dau->data,dau1,cuoi);
		dau=dau->next;
	}
}
bool ktnut(int n){
	n=n/10;
	if((n/10) == 0&& n != 0) return true;
	return false;
}
void Xoa(troKep p,troKep &dau1, troKep &cuoi){
	if(p==dau1&&p==cuoi){
		dau1=cuoi=NULL;
		delete(p);
	}
	else if(p==dau1) {
		p->toi->lui=NULL;
		dau1=p->toi;
		delete(p);
	}
	else if(p==cuoi){
		p->lui->toi=NULL;
		cuoi = p->lui;
		delete(p);
	}
	else{
		troKep t = p->lui;
		t->toi=p->toi;
		p->toi->lui=t;
		delete(p);
	}
}
void XoaGTCo2ChuSo(troKep &dau1, troKep &cuoi){
	troKep p = dau1;
	while(p){
		if(ktnut(p->data)==true) {
			troKep q=p;
			p=p->toi;
			Xoa(q,dau1,cuoi);
		}
		else p=p->toi;
	}
}
bool KTDoiXung(int n,troKep &dau1, troKep &cuoi){
	for(int i = 0;i<n/2;i++){
		if(dau1->data != cuoi->data) return false;
		dau1=dau1->toi;
		cuoi=cuoi->lui;
	}
	return true;
}
int main(){
//	tro dau=NULL;
	troKep dau1 = NULL;
	troKep cuoi= NULL;
	cout<<"nhap vao n= ";
	int n;
	cin>>n;
	NhapKep(n,dau1,cuoi);
	cout<<endl;
//	NhapKep(dau1,cuoi);
	In( dau1,cuoi);
//	copyNT(dau,dau1,cuoi);
//	cout<<"danh sach cac so nguyen to da dc copy: ";
//	In(dau1,cuoi);
//	if(KTDoiXung(n,dau1,cuoi)==true) cout<<"\ndanh sach doi xung";
//	else cout<<"\ndanh sach khong doi xung";
	XoaGTCo2ChuSo(dau1, cuoi);
//	In(dau1,cuoi);
//	if(ktnut(14)==true) cout<<"dung";
//	Xoa(dau1,dau1,cuoi);
	In(dau1,cuoi);
}

