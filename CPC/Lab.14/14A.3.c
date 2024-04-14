#include<stdio.h>
void main(){
	int n,i=1;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],ecount=0,ocount=0;
	for(i=0;i<=n-1;i++){
		printf("Enter size of array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		if(a[i]%2==0){
			ecount++;
		}
		else{
			ocount++;
		}
	}
	printf("Even number in array:%d\n",ecount);
	printf("Odd number in array:%d\n",ocount);
}