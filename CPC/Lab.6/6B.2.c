#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,posroot,nevroot;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    posroot=(-b+((b*b-4*a*c)))/2*a;
    nevroot=(-b-((b*b-4*a*c)))/2*a;
    printf("%d",posroot);    
    printf("%d",nevroot);

}
