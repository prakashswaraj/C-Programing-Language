
/*
    Program to perform sum afer reading he inputs from a file.... 
*/

#include<stdio.h>
 int main(){
    int x,y,z;
    FILE *fp;
    fp = fopen("f1.txt","r");
    if(fopen == NULL){
        printf("file not found: ");
    }
    x = fscanf(fp,"%d",&x);
    y = fscanf(fp,"%d",&y);
    z = x + y;
    printf("%d",z);
    fclose(fp);
    return 0;
 }