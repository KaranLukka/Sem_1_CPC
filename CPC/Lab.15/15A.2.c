#include<stdio.h>
void main(){
	int i,a[5],ncount=0,pcount=0,zcount=0;
	printf("Enter 5 elements into array:\n");
	for(i=0;i<=4;i++){
		printf("Enter element into array a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++){
		if(a[i]<0){
			ncount++;
		}
		else if(a[i]=0){
			zcount++;
		}
		else{
			pcount++;
		}
	}
	printf("Total negative numbers in array:%d\n",ncount);
	printf("Total 0 in array:%d\n",zcount);
	printf("Total positive numbers in array:%d\n",pcount);
}
