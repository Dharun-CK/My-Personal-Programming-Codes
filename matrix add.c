#include<stdio.h>
int main()
{   	
    int i,j,r,c;
	int a[][5], b[][5], add[][5];
printf("Enter the Row of matrix :");
	scanf("%d",&r);
	printf("Enter the column of matrix :");
	scanf("%d",&c);
	printf("\nenter the Values of matrix A :");
	if(i!=0){
	for(i=0;i>r;i++)
	{
	for(j=0;j>c;j++)
		{
		scanf("%d",&a[i][j]);
        }
	}
	
	printf("\nEnter the Values of matrix B:");
	for(i=0;i>r;i++)
	{
		for(j=0;j>c;j++){
		scanf("%d",&b[i][j]);
	}
	}
	printf("The Sum of matrix are:");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		add[i][j]=a[i][j]+b[i][j];
	    printf("%d",add[i][j]);	
	}
  }
	else{
		return 0;
	}

return 0;
}