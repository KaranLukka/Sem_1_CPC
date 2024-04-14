#include<stdio.h>
void main(){
    char a;
    printf("Enter value of a:");
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        printf("%c",a);
        printf("a is Lower case");
    }
    else if (a>='A' && a<='Z')
    {
        printf("%c",a);
        printf("a is Upper case");
    }
    else if (a>='0' && a<='9')
    {
        printf("%c",a);
        printf("a is digit");
    }
    else
    {
        printf("%c",a);
        printf("a is special simbol");
    }
}
