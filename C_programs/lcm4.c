#include<stdio.h>
int main(){
    int n,i,l,c;
    printf("enter the no of elements:: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the data:: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++){
        for(l=1;l<=a[i]*a[i+1];l++){
            if(l%a[i]==0&&l%a[i+1]==0){
             a[i+1]= l;
             break;
            }
        }
    
       // printf("%d",a[i+1]);
    }
   printf("%d",a[i+1]);

    return 0;
}