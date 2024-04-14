#include<stdio.h>
void main(){
	int a,i=1,sum=0;
	printf("Enter value of a:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum+=i;
	}printf("%2d\n",sum);
}