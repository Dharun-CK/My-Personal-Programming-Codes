#include <stdio.h>
int main()
{
    int  a,b;
    printf("ENTER THE Mark: ");
    scanf("%d",&a);
    printf("ENTER THE Handwriting Condition: ");
    scanf("%d",&b);
    if (b==1)
    a+=10;
    printf("your mark is %d" , a);

    return 0;
} 