#include<stdio.h>
void main(){
	int i=1,x,count=0;
	char a[100];
		printf("Enter a string:");
		scanf("%[^\n]c",a);
		printf("Given string is:%s\n",a);
	for(i=0;i<20;i++){
		if(a[i]!='\0'){
			count++;
		}
	}
	a[i]='\0';
	printf("Length of string:%d\n",count);
}