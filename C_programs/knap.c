
/*
     Program to solve knapsack problem...
*/

#include<stdio.h>

void knapsack(int n , float weight[] , float profit[] , float capacity)
{
    int i,j;
    float x[20] , tp = 0.0;
    float u = capacity;
    for(i=0;i<n;i++)
    x[i] = 0.0;
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
        break;
        else{
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }
    if(i<n)
    {
        x[i] = u/weight[i];
    }
    tp = tp + (x[i]*profit[i]);
    printf("the ratio vector is: ");
    for(i=0;i<n;i++)
    {
        printf("%f\t " , x[i]);
    }
    printf("\n the total peofit is: %f ", tp);

}

int main()
{
    float weight[20],profit[20],capacity;
    int i,j,num;
    float ratio[20],temp;
    printf("\n enter the no. of objects: ");
    scanf("%d",&num);
    printf("\n enter the weights and respective profits of the objects: ");
    for(i=0;i<num;i++)
    {
        scanf("%f %f" , &weight[i],&profit[i]);
    }
    printf("\n enter the capacity if the bag: ");
    scanf("%f",&capacity);
    for(i=0;i<num;i++)
    {
        ratio[i] = profit[i] / weight[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;

                temp= weight[j];
                weight[j] = weight[i];
                weight[i] = temp;

                temp = profit[j];
                profit[j] = profit[i];
                profit[i] =  temp;
            }
        }
    }
    knapsack(num , weight , profit , capacity);
    return 0;
}