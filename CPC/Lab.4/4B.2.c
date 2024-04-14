#include<stdio.h>
void main(){
  float p,r,t,Simple_Interest;
  printf("Enter value of p:");
  scanf("%f",&p);
  printf("Enter value of r:");
  scanf("%f",&r);
  printf("Enter value of t:");
  scanf("%f",&t);
  Simple_Interest=p*r*t/100;
  printf("%f",Simple_Interest);
  
}
