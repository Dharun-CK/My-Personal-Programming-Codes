#include<stdio.h>
#include<math.h>
void main()
{
    int num,n,r,i,sum=0,a;
    printf("Enter the Number:");
    scanf("%d",&i);
    a=i;
    while(i>0)
    {
        r= i%10;
        sum= sum+(r*r*r);
        i=i/10;
    }
    printf("%d\n",sum);
    
    if(sum==a)
    printf("The Number is  Armstrong Number\n");
    
    else
    printf("The number is not a Armstrong Number");
 
    
}