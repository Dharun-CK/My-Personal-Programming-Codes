#include<stdio.h>
#include<math.h>
int main()
{
    
    int a,b,c;
    printf("Enter the Number A,B:");
    scanf("%d%d",&a,&b);
    printf("\nADD(1)\nSUB(2)\nMUL(3)\nDIV(4):");
    scanf("%d",&c);
    if(c==1)
    {
        a+=b;
        printf("The SUM is %d",a);
    }
    else if(c==2)
    {
        a-=b;
        printf("The SUB is %d",a);1
    else if(c==3)
    {
        a*=b;
        printf("The MUL is %d",a);
    }
    else if(c==4)
    {
        a/=b;
        printf("The DIV is %d",a);
    }
    else
    {
        printf("INVALID CHOICE");
    }

    return 0;
}
