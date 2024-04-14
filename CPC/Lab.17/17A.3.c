#include<stdio.h>
void main(){
    int x,y,sum=0;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);    
    int *ptr1,*ptr2,*ptr3;
    ptr1=&x;
    ptr2=&y;
    ptr3=&sum;
    *ptr3=*ptr1+*ptr2;
    printf("Sum of given numers:%d\n",*ptr3);
}