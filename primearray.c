#include<stdio.h>
int main()
{
int n;
  a:
  printf("ENTER The size:");
  scanf("%d",&n);
  int a[n],b[n],t,j,i;
  printf("Enter the Array value:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<n;i++)
  {
  if((i%2==0)&&(i%3==0)&&(i%5==0)&&(i%7==0))
  {
  	for (i=0;i<n;i++)
	printf("\n IT is Prime number %d" ,a[i]);
  }
  else{
  printf("\nIt is Not a Prime Number %d",a[i]); 
  }
  printf("\n");
  printf("Given Numbers are:");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);
  printf("\n");
  goto a;
}
return 0;
}