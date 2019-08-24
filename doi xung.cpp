#include<iostream>
using namespace std;

bool DoiXung(int left, int right, int a[]){
        if(left == right || (right-left==1&&a[right]==a[left])){ 
            return true;
        }
        else{
            if(a[right] == a[left] ) {
                DoiXung(left+1,right-1,a);
            }
            else {
                return false;
            }
        }
}

int main()
{
	cout<<" tien dep trai nhat:"<<endl;
	int a[5]={5,6,7,6,5};
	if(DoiXung(0,4,a)==true) cout<<"mang doi xung";
	else cout<<"mang khong doi xung";
}
