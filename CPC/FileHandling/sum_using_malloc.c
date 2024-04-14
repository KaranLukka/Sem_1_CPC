#include<stdio.h>
#include<stdlib.h>
int sum1(int *s);
           
void main(){
            int *fp,i,sum=0,n,res2;
            printf("Enter the number of integers whose sum has to be calculated: ");
            scanf("%d",&n);
            fp=(int *)malloc(sizeof(int)*n);
            for(i=0;i<n;i++)
            {   printf("Enter integer: ");
                scanf("%d",fp);//it keeps allocating space for each integer entered
                sum=sum+*fp;
            }
            printf("Sum using malloc: %d",sum);
            res2=sum1(&n);
            printf("Sum using calloc: %d",res2);

}
int sum1(int *s){ int *f,i=0,sum=0;
                  int n=*s;
                f=(int *)calloc(n,sizeof(int));
                for(i=0;i<n;i++)
                {
                    scanf("%d",f);
                    sum=sum+*f;
                }
                return sum;
                  
}