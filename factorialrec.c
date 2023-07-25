#include<stdio.h>
int main()
{
	int n;
	int rec(int);
	printf("Enter the Number:");
	scanf("%d",&n);
	int f= rec(n);
	printf("Factorial is = %d",f);
}
int rec(int n)
{
	if(n==0)
	return 1;
	else
	return n*rec(n-1);
}