#include<stdio.h>
void main(){
	int a,i=1,sum=0,n;
	float avg=0;
	printf("Enter total values upto a:"); 
	scanf("%d",&a);
	while(i<=a){
		printf("Enter value of n:");
		scanf("%d",&n);
		sum+=n;
		avg=sum/i;
		i++;
	}printf("sum upto given n number:%d\n",sum);
	printf("average of given n number:%f\n",avg);
}