#include<stdio.h>
int main(){
	int i,j,r,c;
	L1:
	printf("Enter Rows:");
	scanf("%d",&r);
	printf("Enter the Column:");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0; j<c ;j++)
		printf("*\t");
		printf("\n");
	}
	goto L1;
	 return 0;
}