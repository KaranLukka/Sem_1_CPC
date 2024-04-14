#include<stdio.h>
void main(){
	int a,i=1,sum=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("numbers upto given number:");
	while(i<=a){
		sum=sum+i;
		printf(" %d",i);
		i++;
	}printf("\nsum of given numbers:%d\n",sum);
}