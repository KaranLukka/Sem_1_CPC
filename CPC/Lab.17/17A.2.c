#include<stdio.h>
void main(){
    int x=10;
    char ch='a';
    float f=12.2565;
    double db=458.365748;
    int *ptr1=&x;
    char *ptr2=&ch;
    float *ptr3=&f;
    double *ptr4=&db;
    printf("%d\n",*ptr1);
    printf("%c\n",*ptr2);
    printf("%f\n",*ptr3);
    printf("%lf\n",*ptr4);
}