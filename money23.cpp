#include<stdio.h>
#include<conio.h>
#include<time.h>
 
double cau1( int n)
{	
      if(n==0) 
      {
      	return 0;
	  }
      if( n==1) 
      {
      	return 1;
	  }
	  return cau1( n -1) + 1.0/n;
}
 int main()
 {	
//     int n;
//     scanf("\nnhap n(%d)=%f:",n);
//	 printf("\ngia tri cau 1(%d)=%f",n,cau1(n)); 
//	getch();	 	
//	return 0;
    int n;
    scanf("%d",&n);
    printf("%f",cau1(n));
    getch();
    return 0;
}
