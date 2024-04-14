#include<stdio.h>
void main(){
	int x,i=1,y,ans=1;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	while(i<=y){
		ans*=x;
		i++;
	}printf("ans:%d\t",ans);
}
