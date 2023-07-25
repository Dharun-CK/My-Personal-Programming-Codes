#include<stdio.h>
int main(){
	int i,j,k,r;
	printf("Enter Rows:");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r-i;j++)
		{
			printf("\t");
		for(k=0;k<(r-1);k++)
		{
			printf("*\t");
			
		}
		}
	printf(" \n");
	}
	
  return 0;
}