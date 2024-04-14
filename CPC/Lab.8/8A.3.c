#include<stdio.h>
void main(){
	int a,n,i;
	printf("Enter value of a must be less than n:");
	scanf("%d",&a);
	printf("Enter value of n:");
	scanf("%d",&n);
	i=a+1;
	printf("Number divisible between given numbers are:");
	while(i<n){
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
}