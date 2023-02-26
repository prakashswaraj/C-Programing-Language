/*
         Program to find the hcf of two numbers...
*/

#include<stdio.h>
int hcfof(int,int);
int main(){
    int a,b,hcf;
    printf("enter the numbers: ");
    scanf("%d%d",&a,&b);
    hcf =  hcfof(a,b);
    printf("%d",hcf);
    return 0;
}

int hcfof(int a,int b){
    if(b==0)
    return a;
    else
    return hcfof(b,a%b);
}