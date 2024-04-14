#include<stdio.h>
void main(){
	int a,i=1;
	printf("Enter value of a:");
	scanf("%d",&a);
	while(i<=a){
		if(i%2==1){
			printf("%d\t",i);
		}i++;
	}
}