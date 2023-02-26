
/*
    Program to check whether a number is prime or not ....
*/

#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the no. ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}