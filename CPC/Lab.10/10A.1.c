#include<stdio.h>
void main(){
	int a,i=0,sum=0,x,y,rem=0,rev=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	x=a%10;
	while(a!=0){
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	y=rev%10;
	sum=x+y;
	printf("Sum of first and last digit of given number:%d",sum);
}