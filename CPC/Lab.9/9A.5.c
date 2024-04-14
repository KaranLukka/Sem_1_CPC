#include<stdio.h>
void main(){
	int a,i=1;
	printf("Enter value of a:");
	scanf("%d",&a);
	while(i<=a){
		if(a%i==0){
			printf(" %d ",i);
		}
	i++;	
	}
}