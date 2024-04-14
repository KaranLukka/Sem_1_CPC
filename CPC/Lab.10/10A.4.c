#include<stdio.h>
void main(){
	int n,rem=0,sum=0,x,rev=0,y;
	printf("Enter value of n:"); 
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=(rev*10)+rem;
		n/=10;
	}
	while(rev!=0){
		rem=rev%10;
		printf("Digit of a given number:%d\n",rem);
		rev/=10;
	}
	
}
