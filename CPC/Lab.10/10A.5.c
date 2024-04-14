#include<stdio.h>
void main(){
	int n,rem=0,sum=0,rev=0;
	printf("Enter value of n to print its reverse:"); 
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		sum+=rem;
		n/=10;
	}printf("%d\n",rev);
}