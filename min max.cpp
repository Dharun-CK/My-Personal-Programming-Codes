#include<stdio.h>
int main()
{
	int min,max,sum=0,i,n=0;
	float avg;
	L2:
	printf("Enter The integer:");
	scanf("%d",&i);
	if(i==-1)
	goto L1;
	min=i;
	max=i;
	sum=i;
	avg=i;
	while(1)
	{
		scanf("%d",&i);
		if(i==-1)
		break;
		n++;
		min=min<i?min:i;
		max=max>i?max:i;
		sum+=i;
		avg = sum/ (n+1);
	}
	printf("\nmin=%d",min);
	printf("\nmax=%d",max);
	printf("\nsum=%d",sum);
	printf("\navg=%.2f\n",avg);
	goto L2;
	L1: 
	return 0;	
	}
