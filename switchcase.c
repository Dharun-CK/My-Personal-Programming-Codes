#include<stdio.h>
#include<math.h>
int main()
{
    
    int a,b,c;
    printf("Enter the Number A,B:");
    scanf("%d%d",&a,&b);
    printf("\nADD(1)\nSUB(2)\nMUL(3)\nDIV(4):");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        a+=b;
        printf("The SUM is %d",a);
        break;
    case 2:
        a-=b;
        printf("The SUB is %d",a);
        break;
    case 3:
        a*=b;
        printf("The MUL is %d",a);
        break;
    case 4:
        a/=b;
        printf("The DIV is %d",a);
        break;
    default:
        printf("INVALID CHOICE");
}
    return 0;
}
