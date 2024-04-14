#include<stdio.h>
void main(){
	int n,i=1;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],x,y,sum=0,avg=0;
	for(i=0;i<=n-1;i++){
		printf("Enter size of array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	x=a[0];
	y=a[0];
	for(i=0;i<=n-1;i++){
		sum+=a[i];
		avg=sum/n;
	}
	printf("Average of given number in array:%d\n",avg);
	int count=0;
	for(i=0;i<=n-1;i++){
		if(a[i]>avg){
			count++;
		}
	}
	printf("Total number greater than average:%d",count);
}