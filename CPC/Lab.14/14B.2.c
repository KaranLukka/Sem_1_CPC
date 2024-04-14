#include<stdio.h>
#include<math.h>
void main(){
	int i;
	printf("Enter 5 elements into array:\n");
	float a[5],x,sum=0,asum=0,avg=0;
	for(i=0;i<5;i++){
		printf("Enter element at a[%d]:",i);
		scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++){
		sum+=a[i];
		avg=sum/5;
	}
	float GM,HM;
	GM=a[0];
	for(i=1;i<5;i++){
		GM=GM*a[i];	
	}
	x=pow(GM,0.2);
	for(i=0;i<5;i++){
		asum=asum+1/a[i];
	}
	HM=5/asum;
	printf("Average of given elements:%f\n",avg);
	printf("Geometric mean of given elements:%f\n",x);
	printf("Harmonic mean of given elements:%f\n",HM);
}