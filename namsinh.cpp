#include<iostream>
using namespace std;

//	int s;
//     for(int i =0;i<100;i++){
//     	if(i%2!=0){
//     		s+=i;
//		 }
//     	 
//	 }
//	cout<<" s = "<<"tong ="<<s<<endl;
	
//		int n;
//	   int t =1;
//	   while(t<100){
//	   	if(t%2!=0)
//	    	n=n+t;
//	   	    t++;
//	}
//	       cout<<n<<endl;
	   
//	    
//	 tiendeptrai:
//	    float diem;
//	 	cout<<" nhap vao diem cua ban:"<<endl;
//	 	cin>>diem;
//	 	if( diem < 0 || diem >10){
//	 		cout<<" diem cua ban bi sai. moi ban nhap lai!";
//	 	    goto tiendeptrai;
//		 }
//	

	 void nhap( float &toan, float &hoa, float &ly){
	 	cout<<" nhap diem toan :"<<endl;
	 	cin>>toan;
	 	cout<<" nhap diem hoa "<<endl;
	 	cin>>hoa;
	 	cout<<" nhap diem ly:"<<endl;
	 	cin>>ly;
	 }
	 void indiem( float toan, float hoa, float ly){
	 	cout<<" diem toan ="<<toan<<endl;
	 	cout<<" diem hoa ="<<hoa<<endl;
	 	cout<<" diem ly ="<<ly<<endl;
	 }
    int tinhdiemtb( float toan, float hoa, float ly){
    	int dtb;
    	 dtb = (toan + ly+ hoa)/3;
    	return dtb;
	}
string xeploai( float dtb){
		if(0<dtb < 2){
			return "kem";
			
		}
		else if( dtb >=2&& dtb <5){
			return " yeu";
		}
		else if( dtb >= 5 && dtb < 7){
			return "tb";
		}
		else if( dtb >=7 && dtb < 8){
			return " tien tien";
		}
		else if( dtb >=8 && dtb <= 10){
			return " gioi";
		}
		else cout<<" ban nhap sai:";
	}
	   
int main(){
    float toan, hoa, ly;
    
	 nhap( toan , hoa, ly);
	 indiem(toan , hoa, ly);
	 cout<<tinhdiemtb(toan, ly, hoa)<<endl;
	 cout<<xeploai(dtb)<<endl;
//	   int m;
//	   int j =1;
//	   do{
//	   	if(j%2!=0)
//	   	  m+=j;
//	   	  j++;
//	   }while( j<100);
//	   
//	   cout<<m<<endl;
	   
	   
//	for( khoi tao; dieu kien; buoc lap);

// khoi tao;
// while(dieu kien lap);
//{
//	buoc lap;
//}
//do while
 return 0;
}

