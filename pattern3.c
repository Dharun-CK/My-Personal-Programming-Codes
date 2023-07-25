#include<stdio.h>
void main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		if(i%2==0)
		{
			
			for(j=1;j<n;j++)
			printf("%d",i);
			printf("*");
		}
		else
		{
			for(j=1;j<n;j++)
			printf("%d",i);
			printf("#");
		}
		printf("\n");
	}
}