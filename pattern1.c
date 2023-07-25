#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter Rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+4;j++)
		printf("*\t");
		printf("\n");
	}
	 return 0;
}