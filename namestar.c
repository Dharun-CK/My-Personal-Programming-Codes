#include<stdio.h>
#include<string.h>
int main()
{   char a[1000];
	int i;
	printf("\nEnter The Name:");
	scanf("%s",& a);
	
	for (i=1; i<=strlen(a) ; i++){ 

	a[i-1] = a[i];
	}
	
	printf("The Name Will Be : *%s\n",a);
	
return 0;
}