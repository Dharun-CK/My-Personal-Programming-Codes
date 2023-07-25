#include <stdio.h>

int main()
{
    int  a,b,c, great;
    printf("ENTER THE NUMBERS: ");
    scanf("%d%d%d",&a,&b,&c);
    great = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest number is %d \n" ,great);
    return 0;
}