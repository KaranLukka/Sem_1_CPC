#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    int c=max(a,b);
    int d=min(a,b);
    printf("Max is:%d\n",c);
    printf("Min is:%d",d);
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}