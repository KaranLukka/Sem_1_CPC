#include<stdio.h>
void main(){
	int i=1,n;
	float sum=1,ans=1;
	printf("Enter value of n:");
	scanf("%d",&n);
		for(i=1;i<=n-1;i++){
			ans*=i;
			sum=sum+1/ans;
	}
	printf("Value of mathematical constant e upto given terms is:%f\n",sum);
}