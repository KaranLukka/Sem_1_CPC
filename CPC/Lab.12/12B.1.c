#include<stdio.h>
void main(){
	int i=1,j=1,sum=0,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=n;i<=j;j--){
			printf("%d",j);
			sum+=j;
		}
		printf("\n");
	}
	printf("Sum upto given value of n:%d\n",sum);
}