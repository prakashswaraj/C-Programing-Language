
/*
    Program to read the content of a file...
*/

#include<stdio.h>

void main(){
    char str[10];
    FILE *fp;
    fp = fopen("f1.txt","r");
    if(fopen == NULL){
        printf("file not found: ");
        return;
    }
    while(fgets(str,4,fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
}