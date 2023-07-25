#include<stdio.h>
void main()
{
	int i,j,n;
	L1:
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		    printf("#");
			for(j=1;j<n-1;j++)
			printf("%d",i);
			printf("*");
		}
		else
		{
			printf("*");
			for(j=1;j<n-1;j++)
			printf("%d",i);
			printf("#");
		}
		printf("\n");
	}
	goto L1;
}