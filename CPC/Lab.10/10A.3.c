#include<stdio.h>
void main(){
	int a,i=1,count=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	while(i<=a){
		if(a%i==0){
			count+=1;
			i++;
		}
		else{
			i++;
		}
	}if(count==2){
		printf("Given number is prime");
	}
	else{
		printf("Given number is not prime");
	}
}
	