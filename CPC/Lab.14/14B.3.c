#include<stdio.h>
void main(){
	int i,j,a[5],temp;
	printf("Enter 5 elements into array:\n");
	for(i=0;i<=4;i++){
		printf("Enter element into array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		for(j=i+1;j<=5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Numbers in ascending order:\n");
	for(i=0;i<=4;i++){
		printf("%d\n",a[i]);
	}
}