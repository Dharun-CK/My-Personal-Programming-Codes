#include<stdio.h>
#include<math.h>
void main()
{
    int d, profit,loss,bn = 1000,br=10,bp=3,da=100,bs;
    printf("enter the no of book sold:");
    scanf("%d",&bs);
    profit=bs*br;
    loss= bs*bp + da ;
    profit=profit-loss;
    printf("\nthe profit is %d",profit);
    printf("\nthe loss is %d",loss);
    printf("\n Per weekly profit is %d", profit*4);
}
