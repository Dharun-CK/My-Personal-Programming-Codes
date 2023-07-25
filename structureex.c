#include<stdio.h>
void main()
{
	struct{
		char name[100];
		int mark;
		float avg;
	}s[10];
	int n;
	printf("Enter No.of.Students: ");
	scanf("%d",&n);
	if(n<10)
	{
		printf("Enter The Student Details\n");
		for(int i=0;i<n;i++)
		{
			printf(" ENTER NAME:");
			for(int j=0;j<11;j++)
			scanf("%c",&s[i].name[j]);
			printf("ENTER MARK:");
			scanf("%d",&s[i].mark);
			printf("ENTER AVG:");
			scanf("%f",&s[i].avg);
		}
		
		printf("Student Details\n");
		printf("Name\tMark\tAverage\t\n");
		for(int i=0;i<n;i++){
			printf("%s\t",s[i].name);
			printf("%d\t",s[i].mark);
			printf("%f\t",s[i].avg);
		
		}
	}
	else
	{
		printf("Enter below 10 Values!");
	}
}