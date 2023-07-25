#include <stdio.h>
int main()
{
    int  a;
    char b,c,d;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&a);
    d = (a%5)?b:(((a%3)?c:a));
    b = printf("Hello\n");
    c = printf("Hi\n");
    printf("%c",d);
    
    if((a%5)&&(a%3))
    printf("Hi Hello");
   
    return 0;
    

} 