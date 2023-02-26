
/*
     Program to find the hcf of two numbers...
*/
#include<stdio.h>
int main(){
    int n1,n2,i,c,h;
    printf("enter the numbers: ");
    scanf("%d%d",&n1,&n2);
    if(n1!=0 && n2!=0 && n1>n2){
        for(i = 1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                h = i;
            }
        }
        printf("%d",h);
    }
    else if(n2!=0 && n1!=0 && n2>n1){
        for(i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                h=i;
            }
        }
        printf("%d",h);
    }
    else if((n1==0 && n2!=0 )|| ( n1 == 0 && n2 ==0 )){
        printf("%d",n2); 
    }
    else if((n2==0 && n1!=0 )) {
        printf("%d",n1);
    }
    return 0;
}