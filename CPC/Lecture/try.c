#include<stdio.h>
int Fibo(int,int);
void main(){
	int a=0,b=1,i=0,c,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n-2;i++){
		c=a+b;
		printf("%d",c);
	}
	printf("%d",a);
	printf("%d",b);

}
int Fibo(int a,int b){
	int c;
	return c;
}