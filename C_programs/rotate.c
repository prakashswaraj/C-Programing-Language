/*
    Programm to roate the elements of the array....
*/

#include<stdio.h>
int main(){
    int i,n,m;
    scanf("%d",&m);

    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    while(m!=0){
    for(i=1;i<=n;i++){
        if(i<=m){
            arr[i]=arr[n];
        }
        if(i>m){
            arr[i++]=arr[i];
        }
              printf("%d",arr[i]);
    }
    }
    m--;

    
    return 0;
}