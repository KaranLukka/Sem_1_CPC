#include<stdio.h>
int max(int a,int b,int c);
void main(){
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    int d=max(a,b,c);
    printf("Max is:%d\n",d);
}
int max(int a,int b,int c){
    if(a>b){
        if(a>c){
             return a;
        }
        else{
            return c;
        }
    }
    else if(b>a){
        if(b>c){
             return b;
        }
        else{
            return c;
        }
    }
}