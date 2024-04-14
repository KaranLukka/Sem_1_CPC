#include<stdio.h>
int add(int,int);
void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    int f=add(a,b);
    printf("Addition of two no.: %d\n",f);
    printf("%d",sizeof(add(a,b)));
}
int add(int x,int y){
    int f;
    f=x+y;
    return f;
}