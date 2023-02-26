
/*
    Program to find the sum of n natural no...
*/

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum= sum+i;
    }
    printf("%d",sum);
    return 0;
}