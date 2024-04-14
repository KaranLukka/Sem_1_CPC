#include<stdio.h>
void main(){ 
    FILE *f,*f1;
    f=fopen("file.txt","r");
    if(f){printf("File found");}
    char ch;
    ch=getc(f);
    f1= fopen("try2.txt","w");
    fseek(f,4L,1);
   
    while(ch!=EOF)
    { putc(ch,f1);
    ch=getc(f);
    }
    fclose(f);
}