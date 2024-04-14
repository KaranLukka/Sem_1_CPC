#include<stdio.h>
void main(){
	int a[2][2],b[2][2],i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   printf("Enter element at a[%d][%d]",i,j);
		   scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		    printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		   b[j][i]=a[i][j];
	    }
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		    printf("%3d",b[i][j]);
		}
		printf("\n");
	}
}