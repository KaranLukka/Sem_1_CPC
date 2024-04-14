#include<stdio.h>
int add(int a,int b);
void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    int c=add(a,b);
    printf("%d",c);
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}