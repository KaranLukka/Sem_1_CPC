#include<stdio.h>
void main(){
	int a[2][2],i,j,x,sum=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   printf("Enter element at a[%d][%d]",i,j);
		   scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
	        if(i==j){
	            printf("%d\n",a[i][j]);
	            sum+=a[i][j];
	        }
	    }
	}
	printf("Sum of diagonal elments:%d",sum);
}