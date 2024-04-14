#include<stdio.h>
void main(){
	int a[2][2],i,j,ncount=0,pcount=0,zcount=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter element into array at a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
	    for(j=0;j<2;j++){
	       if(a[i][j]<0){
	       		ncount++;
	       }
	       else if(a[i][j]==0){
	   			zcount++;
	    	}
	    	else{
	       		pcount++;
	    	}
	    }
	}
	printf("Total positive numbers in array:%d\n",pcount);
	printf("Total zero in array:%d\n",zcount);
	printf("Total negative numbers in array:%d\n",ncount);
}