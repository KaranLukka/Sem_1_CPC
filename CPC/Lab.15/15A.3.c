#include<stdio.h>
void main(){
	int i,a[5],dcount=0;
	printf("Enter 5 elements into array:\n");
	for(i=0;i<=4;i++){
		printf("Enter element into array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		if(a[i]%3==0){
			dcount++;
		}
	}
	printf("Total numbers divisible by 3 in array:%d\n",dcount);
}