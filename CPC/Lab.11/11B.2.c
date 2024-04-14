#include<stdio.h>
void main(){
	int a,i=0,count=0,rem=0,x,t;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter digit you want to count from given number(x):");
	scanf("%d",&x);
	while(a!=0){
		rem=a%10;
		a/=10;
		t=rem;
		if(x==t){
			count++;
		}
	}
	if(count==1){
		printf("Digit occured only one time in given number\n");
	}
	else{
		printf("Total number of digit in given number:%d\n",count);
	}
}