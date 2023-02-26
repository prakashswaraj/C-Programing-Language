/*
    Program to find the lcm of n numbers..
*/

#include<stdio.h>
int gcdof(int,int); 

int main(){
    int lcm,gcd;
    int a[] = {2,3,5,7};
    lcm = a[0];
     gcd = a[0];
     for(int i=1;i<4;i++){
        gcd = gcdof(a[i],lcm);
        lcm = (lcm*a[i])/gcd;
     }
         printf("%d",lcm);
     return 0;
}
     int gcdof(int x,int y)
     {
        if(y==0)
        return x;
        else
        return gcdof(y,x%y);
     }