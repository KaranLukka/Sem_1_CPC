#include<stdio.h>
void main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   printf("Enter element at a[%d][%d]",i,j);
		   scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   printf("Enter element at b[%d][%d]",j,i);
		   scanf("%d",&b[j][i]);
	    }
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		    c[i][j]=a[i][j]+b[j][i];
		    printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}