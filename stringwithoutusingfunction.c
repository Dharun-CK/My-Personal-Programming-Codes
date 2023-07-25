#include<stdio.h>
#include<string.h>
int main()
{
	char c1[100],i;
	gets(c1);
	for(i=0;c1[i]!='\0';i++);
	printf("%d",i);
	return 0; 	
}