#include<stdio.h>
#include<stdlib.h>
void try(){
            int *fp;
            fp=(int *) malloc(sizeof(int)*4);
            *fp=20;
            printf("%d",*fp);
}
void main(){
            int i,*fp,*p,sum=0;
            fp=(int *) calloc(4,sizeof(int));//pointer pointing the address of memory
            p=fp;
            for(i=0;i<4;i++)
            {
                scanf("%d",fp);//values getting stored at the memory location
                sum=sum+*fp;//to perform operations on the values at that memory location * is used
                fp++;
            }
            for(i=0;i<4;i++)
            {printf("%d ",*p);//address stored in another pointer which helps in printing the values
            p++;}
            printf("%d",sum);
}