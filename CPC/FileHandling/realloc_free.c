#include<stdio.h>
#include<stdlib.h>
void main(){
            int *fp;
            fp=(int *) malloc(5*sizeof(int));
            fp=(int *)realloc(fp,2*sizeof(int));
            *fp=20;
            printf("%d",*fp);
            free(fp);
            printf("\n%d",*fp);
}