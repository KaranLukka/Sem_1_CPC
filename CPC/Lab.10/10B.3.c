#include<stdio.h>
void main(){
	int n,rem=0,sum=0,rev=0,x,t;
	printf("Enter value of n:"); 
	scanf("%d",&n);
	t=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		sum+=rem;
		n/=10;
	}x=rev;
	if(x==t){
		printf("Given number is pallindrome\n");
	}
	else{
		printf("Given number is not pallindrome\n");
	}
}