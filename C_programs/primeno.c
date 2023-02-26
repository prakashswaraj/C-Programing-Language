/*
    Program to check whether a number is prime or not ....
*/

#include<stdio.h>
int main(){
    int n,i,count = 0;
    printf("enter the no. ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("the no. is prime:");
    }
    else{
        printf("the no is not prime: ");
    }
    return 0;
}