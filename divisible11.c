#include<stdio.h>
int main()
{
	long int n;
	l1:
	printf("\nEnter the Number:");
	scanf("%il",&n);
	
	if(n%11==0)
	{
	printf("\nIt is divisible by 11");
    }
    else    
	printf("\nIt is Not Divisible by 11");
	goto l1;
return 0;	
}