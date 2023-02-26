
/*
    Program to conver the roman number to decimal number ...
*/

#include<stdio.h>
#include<string.h>

int decimal(char c){
    int count;
    switch(c){
        case 'I':
        count = 1;
        break;
        case 'V':
        count = 5;
        break;  
        case 'X':
        count = 10;
        break;
        case 'L':
        count = 50;
        break;
        case 'C':
        count = 100;
        break;
        case 'D':
        count = 500;
        break;
        case 'M':
        count = 1000;
        break;
        case '\0':
        count = 0;
        break;
        default:
        count = -1;
        break;
    }
    return count;
}
int main()
{
    char roman[100];
    int num = 0;
    int i = 0;
    printf("enter the roman numeral: ");
    scanf("%s",roman);
    while(roman[i]){
        if(decimal(roman[i])<0)
        printf("invalid entry: ");
        if(strlen(roman)-i > 2){
         if(decimal(roman[i])<decimal(roman[i+2]))
             printf("invalid entry:: ");
        }
         if(decimal(roman[i])>=decimal(roman[i+1]))
        {
            num = num +decimal(roman[i]);
        }
        else {
            num = num + (decimal(roman[i+1]) - decimal(roman[i]));
        }
        i++;
    }
    printf("%d",num);
    return 0;
}