#include<stdio.h>
void main(){
	char ch='0';
	while(ch<='z'){
		printf("%c %2d\n",ch,ch);
		ch++;
	}printf("\n");
}