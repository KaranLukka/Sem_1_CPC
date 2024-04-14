#include<stdio.h>
void main(){
	int a,i=1,sum=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	while(i<a){
		if(a%i==0){
			sum+=i;	
		}
	i++;
	}if(sum==a){
			printf("Given number is perfect:\n");	
		}
		else{
			printf("Given number is not perfect\n");
		}
}