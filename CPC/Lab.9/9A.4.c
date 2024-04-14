#include<stdio.h>
void main(){
	int a,i=1,x=1;
	printf("Enter value of a:");
	scanf("%d",&a);
	while(i<=a){
		x=x*i;
		i++;
	}printf("Factorial of given number:%d\t",x);
}
