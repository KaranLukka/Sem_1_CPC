#include<stdio.h>
void main(){
	int i,j,a[5],b[5];
	printf("Enter 5 elements into array:\n");
	for(i=0;i<=4;i++){
		printf("Enter element into array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		b[i]=a[i];
		printf("elements of array a copied in b[%d]:%d\n",i,b[i]);
	}
}