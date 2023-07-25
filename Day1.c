#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	float i,j;
	char name;
	printf("ENTER THE TEXT : ");
	scanf("%c",&name);
	printf("\n%c",name);
	printf("\nENTER THE NUMBERS:");
	scanf("%d,%d",&a,&b);
	printf("\nThe  NumberS are: %d,%d", a,b);
	printf("\nENTER THE FLOAT NUMBERS:");
	scanf("%f %f",&i,&j);
	printf("\nThe FLOAT NumberS are: %f  , %f", i,j);

}