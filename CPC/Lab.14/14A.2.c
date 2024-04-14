#include<stdio.h>
void main(){
	int n,i=1;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],pcount=0,ncount=0,zcount=0;
	for(i=0;i<=n-1;i++){
		printf("Enter element in array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		if(a[i]>0){
			pcount++;
		}
		else if(a[i]<0){
			ncount++;
		}
		else{
			zcount++;
		}
	}
	printf("Positive number in array:%d\n",pcount);
	printf("Negative number in array:%d\n",ncount);
	printf("Total number of 0 in array:%d\n",zcount);
}