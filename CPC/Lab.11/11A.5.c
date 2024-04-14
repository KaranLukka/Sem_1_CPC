#include<stdio.h>
void main(){
	int a,i=1,x=1;
	printf("Enter value of a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		x=x*i;
	}printf("Factorial of given number:%d\n",x);
}