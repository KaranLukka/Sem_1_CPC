#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==1){
			sum=sum+i;
		}
		else{
			sum=sum-i;
		}i++;

	}printf("%d\n",sum);
}