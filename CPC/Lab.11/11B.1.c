#include<stdio.h>
void main(){
	int n,i=0,a=0,b=1,c;
	printf("Enter value of n:"); 
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(i=0;i<=n-3;i++){
		c=a+b;
		printf("%d  ",c);
		a=b;
		b=c;
	}
}