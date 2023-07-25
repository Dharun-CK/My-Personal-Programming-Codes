#include <stdio.h>
int main()
{
    int  a,b,c,d, great,great1;
    printf("ENTER THE NUMBERS: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    great = (a>b)?((a>c)?a:c):((b>c)?b:c);
    great1 = great>d?great:d;
    printf("The greatest number is %d \n" ,great1);
    return 0;
} 