#include<stdio.h>
void main(){
	char ch='A',hc='a';
	while(ch<='Z'){
		printf("%2c",ch);
		ch++;
	}printf("\n");
	while(hc<='z'){
			printf("%2c",hc);
			hc++;
	}
}