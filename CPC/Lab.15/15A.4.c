#include<stdio.h>
void main(){
	int n,i=1,x,count=0;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<=n-1;i++){
		printf("Enter element in array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("Enter element you want to search:");
	scanf("%d",&x);
	for(i=0;i<=n-1;i++){
		if(x==a[i]){
			count++;
		}
	}
	printf("Entered element occured in array:%d\n",count);
}