#include<stdio.h>
void swap(int *a,int *b);
void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Before:%d %d\n",a,b);
    swap(&a,&b);
    printf("After:%d %d\n",a,b);
}
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}