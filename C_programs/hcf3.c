/*
     Program to find the hcf of n elements...
*/

#include<stdio.h>
int lcmof(int,int);
int main() {
    int lcm,hcf,n,i;
    printf("enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("enter the data:: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    lcm = a[0];
    hcf = a[0];
    for(i=1;i<n;i++){
        lcm = lcmof(a[i],hcf);
        hcf = (hcf*a[i])/lcm;
    }
    printf("%d",hcf);
    return 0;
}

int lcmof(int a,int b){
    if(a==0 || b==0){
    return a;
    }
    else
    {
        for(int l = 1;l<=a*b;l++){
            if(l%a==0 && l%b==0)
            return l;
        }
    }
}