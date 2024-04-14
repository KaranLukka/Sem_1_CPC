#include<stdio.h>
int SI(int principal,int rate,int time);
void main(){
    int principal,rate,time;
    printf("Enter value of principal:");
    scanf("%d",&principal);
    printf("Enter value of rate:");
    scanf("%d",&rate);
    printf("Enter value of time:");
    scanf("%d",&time);
    int c=SI(principal,rate,time);
    printf("Simple interest is:%d\n",c);
}
int SI(int principal,int rate,int time){
    int SI;
    SI=(principal*rate*time)/100;
    return SI;
}