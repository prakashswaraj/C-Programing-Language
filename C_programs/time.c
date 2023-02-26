
/*
    Program to add the time given by the users.
*/

#include<stdio.h>
struct time 
{
    int h;
    int m;
} ;
struct time add (time,time);
void main()
{
  struct time t1,t2,t3;
  scanf("%d %d",&t1.h,&t2.m);
  scanf("%d %d",&t2.h,&t2.m);
  t3 = add(t1,t2);
  printf("%d %d",t3.h , t3.m);
}
struct time add (struct time t1,struct time t2)
{
    struct time sum ; 
    sum.m = t1.m + t2.m;
    sum.h = t1.h + t2.h;
    if(sum.m >= 60)
    {
        sum.m = sum.m - 60 ;
        sum.h++;
    } 
    return sum;
}

