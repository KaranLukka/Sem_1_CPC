#include<stdio.h>
int fac(int a);
void main(){
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	int x=fac(a);
	printf("%d",x);
}
int fac(a){
    int x=1,i=1;
    for(i=1;i<=a;i++){
        x*=i;
    }
	return x;
}