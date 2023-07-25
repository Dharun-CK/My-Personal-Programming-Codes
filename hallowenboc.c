#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("Enter Rows:");
	scanf("%d",&r);
	printf("Enter the Column:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(i==0||j==0||i==r-1||j==c-1)
		printf("*\t");
		else
		printf("\t");
	}
	printf(" \n");
	}
	
  return 0;
}