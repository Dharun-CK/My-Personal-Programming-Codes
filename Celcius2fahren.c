#include<stdio.h>
int main()
{
	int a,b;
	float c ,f;
	printf("\nEnter the OPTION \n1-Celcius to Fahrenheit\n 2-Fahrenheit to Celcius:");
	scanf("%d",&a);
	printf("\nEnter the Temperature :");
	scanf("%d",&b);
	if(a==1)
	{
		f=(1.8*b)+32;
	    printf("The Fahrenheit Temperature Is: %f",f);
	}
	else
	{
		if(a==2)
		{
			c=((b-32)*5)/9;
			printf("The Celcius Temperature is : %f",c);
		}
	}
}