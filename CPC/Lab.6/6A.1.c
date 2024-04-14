#include<stdio.h>
void main(){
    int a,b,sum,product,subs,division,i=0 ;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    if (i==1)
    {
        sum=a+b;
        printf("%d",sum);
    }
    if (i==2)
    {
        product=a*b;
        printf("%d",product);
    }
    if (i==3)
    {
        subs=a-b;
        printf("%d",subs);
    }
    if (i==4)
    {
        division=a/b;
        printf("%d",division);
    }
    
}