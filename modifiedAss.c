#include<stdio.h>
void main()
{
	int r,sum=0;
	long int n;
	scanf("%ld",&n);
	L1:
		while(n>0)
		{
			r=n%10;
			sum+=r;
			n=n/10;
			
		}
		printf("%d\n",sum);
	    if(sum>9)
	    
		goto L1;
		
		if(sum==1)
		printf("UNO");
		else
		printf("NOT UNO");
		
}