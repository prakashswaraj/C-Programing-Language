/*
    Program to add the two times entered by the user...
*/

#include<stdio.h>
typedef struct 
{
   int h;
   int m; 
} time;
time add_time (time,time);
void main()
{
    time t1,t2,t3;
    printf("enter the launch time of missile in hh mm format: ");
    scanf("%d  %d",&t1.h,&t1.m);
    printf("enter the travelling time of missile in hh mm format: ");
    scanf("%d  %d",&t2.h,&t2.m);
    t3 = add_time(t1,t2);
    printf("the destroying time is %d  %d",t3.h, t3.m);
}
time add_time (time t1,time t2)
{
    time sum ;
    sum.m = t1.m + t2.m;
    sum.h = t1.h + t2.h;
    if(sum.m >= 60)
    {
        sum.m = sum.m - 60;
        sum.h++;
    }
    return sum;
}
