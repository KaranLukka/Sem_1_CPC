#include<stdio.h>
void main(){
	int base,i=1,power;
	printf("Enter value of base:");
	scanf("%d",&base);
	printf("Enter value of power:");
	scanf("%d",&power);
	for(i=1;power>i;i++){
		base*=base;
		i++;
	}printf("ans:%d\n",base);
}