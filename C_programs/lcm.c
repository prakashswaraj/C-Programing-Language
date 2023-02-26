/*
     Program to find the lcm of two numbers...
*/

#include<stdio.h>
int main(){
    int n1,n2,c;
    printf("enter the two number:");
    scanf("%d%d",&n1,&n2);
    for(c=1;c<=n1*n2;c++){
        if(c%n1==0 && c%n2==0){
            printf("%d",c);
            break;
        }
    }
    return 0;

}