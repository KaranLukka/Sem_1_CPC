#include<stdio.h>
void main(){
	int a[5],b[5],count=0,i;
	for(i=0;i<=4;i++){
		printf("Enter height of student a[%d]:",i);
		scanf("%d",&a[i]);
		printf("Enter weight of student b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<=4;i++){
		if(a[i]>170 && b[i]<50){
			count++;
		}
	}
	printf("Students having height more than 170 and weight less than 50 are:%d\n",count);
	
}