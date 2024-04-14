#include<stdio.h>
void main(){
    int x=10;
    int *ptr;
    ptr=&x;
    printf("%d",*ptr);
    printf("%d",ptr);//%p and %d both can be applied
}