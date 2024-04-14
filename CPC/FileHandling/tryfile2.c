#include<stdio.h>
void main(){
    FILE *f,*f1;
    f=fopen("file.txt","r");
    f1=fopen("try2.txt","a");
    char ch,d;
    int count=1;
    if(f1==NULL){printf("file not found");}
    else{
       fscanf(f,"%c",&ch);
        while(!feof(f))
        { printf("%c",ch);
        fprintf(f1,"%c",ch);
        fscanf(f,"%c",&ch); 
        
        }
        fclose(f);
    }
    fclose(f);
}