#include<stdio.h>
void main(){
    int x,y,c;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);    
    int *ptr1,*ptr2,*ptr3;
    ptr1=&x;
    ptr2=&y;
    ptr3=&c;
    printf("Value of x before change:%d\n",*ptr1);
    printf("Value of y before change:%d\n",*ptr2);    
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    printf("Value of x after swapping:%d\n",*ptr1);
    printf("Value of y after swapping:%d\n",*ptr3);
}