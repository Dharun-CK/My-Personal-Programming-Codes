#include<stdio.h>

#include<math.h>
void main()
{
	void si(float,float,float);
	float ci();
	float p,n,r,e;
	printf("\nEnter The Amount,Interest rate,and Year:");
	scanf("%f%f%f",&p,&n,&r);
	si(p,n,r);
    e=ci();
	printf("\nThe Compound Interest Will Be:");
	printf("%f",e);
}

 void si(float x,float y,float z)
{
	float q= (x*y*z)/100;
	printf("\nThe Simple Interest will Be:\n%f",q);
}

float ci()
{
	float a,b,c,d;
	printf("\nEnter The Amount,Interest rate,YEAR :");
	scanf("%f%f%f",&a,&b,&d);
	c = a*pow(1+(b/100),d);
	return c;
}