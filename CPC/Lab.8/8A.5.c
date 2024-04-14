#include<stdio.h>
void main(){
	int a,i=1,ecount=0,ocount=0;
	
	while(i<=10){
		printf("Enter 10 values of a:");
		scanf("%d",&a);
		if(a%2==0){
			ecount++;
		}
		else{
			ocount++;
		}i++;
	}
	printf("even numbes:%d\n",ecount);
	printf("odd numbers:%d",ocount);
}
		