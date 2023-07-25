#include<stdio.h>
int main(){
	int n,i,j,b[n],a[n];
	L1:
	printf("Enter the Size:");
	scanf("%d",&n);
	printf("\nEnter The Values:");
	for(i=0 ;i<n; i++)
	scanf("%d", &a[i]);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			for(i=0;i<a[n]; i++)
			a[i]=b[i];
		}
	}
	printf("Total Given Arrays Duplicating Numbers are:");
	for(i=0 ; i<n ; i++)
	printf("%d",a[i]);	
	
	printf("\nDuplicating Value in Array are.....");
	for(i=0; i<n; i++)
	{
	for(j=i+1; j<n; j++)
		{
		if(b[i] == b[j])
			{
			printf("%d",b[i]);
			}
		}
	}
	goto L1;
return 0;
}