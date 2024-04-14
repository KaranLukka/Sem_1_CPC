#include<stdio.h>
void main(){
	int n,i=1;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<=n-1;i++){
		printf("Enter size of array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("a[%d]:%d\n",i,a[i]);
	}
	
}