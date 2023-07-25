#include<stdio.h>
int main()
{
	long int n,ce,co,r,i,s,e;
	l1:
	printf("\nEnter the Number:");
	scanf("%il",&n);
	while(n>0)
	{
		r = n%10;
		co = co+r;
		i = ++r;
		
		if(i!=r)
		ce=ce+r;
		r++;
		
		s=co-ce;
    }
	
	if(s/11)
		{
			printf("It is Divisible by 11");
		}
		else
		{
			printf("It is Not divisible by 11");
		}
	goto l1;
return 0;	
}