#include<stdio.h>
void main(){
	int i=1,j=1,x=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d",x);
			if(x==1){
				x=0;
			}
			else if(x==0){
				x=1;
			}
		}printf("\n");
	}
}