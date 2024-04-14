#include<stdio.h>
void main(){
	int n,i=0;
	printf("Enter total elements in array:");
	scanf("%d",&n);
	int y[n];
	for(i=0;i<n;i++){
	    printf("Enter element at y[%d]:",i);
	    scanf("%d",&y[i]);
	}
	int *x;
	x=&y;
	for(i=0;i<n;i++){
		printf("%d",*(x+i));
	}
}