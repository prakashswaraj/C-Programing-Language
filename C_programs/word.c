
/*
    Program to print the numbers between 1 and 9 in their english form and 
    beyond 9 print the numbers in a range as even number  and odd number...
*/

#include<stdio.h>
int main()
{
    int i,a,b,n;
    printf("enter the range of the  numbers:");
    scanf("%d\n%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        if(n>=1&&n<=9)
        {
            switch(n)
            {
                case 1:
                printf("one.\n");
                break;
                case 2:
                printf("two.\n");
                break;      
                case 3:
                printf("three\n");
                break;
                case 4:
                printf("four\n");
                break;
                case 5:
                printf("five.\n");
                break;
                case 6:
                printf("six.\n");
                break;
                case 7:
                printf("seven.\n");
                break;
             case 8:
                printf("eight.\n");
                break;      
                case 9:
                printf("nine\n");
                break;
            }    
                 }  if(n>9&&n%2==0)
                printf("even\n");
                if(n>9&&n%2!=0)
                printf("odd\n");       
        
    }
    return 0;
}