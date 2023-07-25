#include<stdio.h>
void main()
{
  int n;
  printf("ENTER The size:");
  scanf("%d",&n);
  int a[n],i,t,j;
  printf("Enter the Array value:");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]>a[j])
  		{
  			t=a[i];
  			a[i]=a[j];
  			a[j]=t;
		  }
	  }
  }
  printf("Sorted Array is ......\n");
  for(i=0;i<n;i++)
  printf("%d,",a[i]);
}