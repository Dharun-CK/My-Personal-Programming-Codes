#include<stdio.h>
void main()
{
    int i,n,r,sum;
    printf("Enter the Number:");
    scanf("%d",&i);
    while(i>0)
    {
        r= i%10;
        sum=sum+r;
        i=i/10;
    }
    printf("Sum of digits= %d",sum);
}