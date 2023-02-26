/*
    Program to find the sum of n natural number...
*/

#include<stdio.h>
int main(){
    int n,sum = 0 ;
    scanf("%d",&n);
      for(int i = 1 ; i<=n;i++){
        sum = sum +i;
      }
    
  //  sum = (n*n+n)/2;
    printf("%d",sum);

    return 0;
}