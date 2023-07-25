#include<stdio.h>
#include<math.h>
void main()
{
    int num, num1;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num!=0)
    {
        num1 = num*num;
        printf("The sqrt value is %d", num1);
        
        if(num1%10==num)
        {
            printf("\nIt is Automorphic number");
        }
        else
        {
            printf("\nIt is Not automorphic Number");
        }
    }
    else
    {
        printf("Invalid Input");
    }
}