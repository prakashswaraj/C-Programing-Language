


#include<stdio.h>
int main(){
    int i,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        while(arr[i]!=0){
            if(arr[i]%2==0){
                arr[i]=(arr[i])/2;
                count++;
            }
            if(arr[i]%2==1){
                arr[i]=(arr[i]-1)/2;
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}