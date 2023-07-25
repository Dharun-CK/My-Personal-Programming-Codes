#include<stdio.h>

int main()
{
	int a,b,c,d;
	printf("a,b=");
	scanf("%d%d",&a,&b);
	printf("add(1),sub(2),multi(3),div(4)");
	scanf("%d",&c);
	if(c==1)
	{
		d=a+b;
		printf("%d",d);
	}
	else if(c==2)
	{
		d=a-b;
		printf("%d",d);
	}
	else if(c==3)
	{
		d=a*b;
		printf("%d",d);
	}
	else if(c==4)
	{
		d=a/b;
		printf("%d",d);
	}
	else
	{
		printf("invalid choice");
	}
	return 0;
}
	
	