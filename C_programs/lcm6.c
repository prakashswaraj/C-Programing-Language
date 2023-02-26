/*
     Program to find the lcm of n numbers...
*/

#include<stdio.h>
int gcdof(int,int);

int main(){
    int n,i,lcm,gcd;
    printf("enter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("ente rthe data: ");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
        lcm= a[0];
        gcd  =a[0];
        for(i=1;i<n;i++){
            gcd = gcdof(a[i],lcm);
            lcm = (lcm*a[i])/gcd;
        }
        printf("\n the lcm is %d",lcm);
        return 0 ;
}
int gcdof(int x,int y){
    if(y==0)
    return x;
    else
    return gcdof(y,x%y);
}