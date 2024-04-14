#include<stdio.h>
void main(){
	int n,i=1;
	printf("Enter size of array n:");
	scanf("%d",&n);
	int a[n],x,y,sum=0,avg=0;
	for(i=0;i<=n-1;i++){
		printf("Enter element in array at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	x=a[0];
	y=a[0];
	for(i=0;i<=n-1;i++){
		if(a[0]<a[i]){
			x=a[i];
		}
		if(a[0]>a[i]){
			y=a[i];
		}
		sum+=a[i];
		avg=sum/n;
	}
	printf("Max number in array:%d\n",x);
	printf("Min number in array:%d\n",y);
	printf("Sum of given number in array:%d\n",sum);
	printf("Average of given number in array:%d\n",avg);
}