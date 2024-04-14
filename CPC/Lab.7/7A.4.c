#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	((a>b)?printf("a is greatest"):(b>c)?printf("b is greatest"):printf("c is greatest"));

}