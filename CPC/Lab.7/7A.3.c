#include<stdio.h>
void main(){
    int a,b,sum,product,subs,division,operation;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("choose operation:\n1:add\n2:product\n3:subs\n4:division\n");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1:
        operation==1;
        sum=a+b;
        printf("%d",sum);
        break;
    
    case 2: 
        operation==2;
        product=a*b;
        printf("%d",product);
        break;
    
    case 3:
        operation==3;
        subs=a-b;
        printf("%d",subs);
        break;
    
    case 4:
        operation==4;
        division=a/b;
        printf("%d",division);
        break;
    }   
}
