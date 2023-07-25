#include<stdio.h>
void main()
{
	struct{
		char name[100];
		int sub;
		int subcode[300];
		char subname[100];
		char grade[100];
		int mark[100];
	}s[10];
	
	int n,sub;
	printf("Enter No.of.Students: ");
	scanf("%d",&n);
	if(n<10)
	{
		printf("Enter The Student Details\n");
		printf("\n");
		for(int i=1; i<n ; i++)
		{
			printf("ENTER NAME:");
			for(int j=1;j<6;j++)
			scanf("%c", &s[i].name[i]);
			printf("ENTER No .of .Subject:");
			scanf("%d", &s[i].sub);
			printf("ENTER Subject Code:");
			for(int k=1; k<sub;k++){
			scanf("%d",&s[i].subcode[k]);
			printf("ENTER Mark for %s:",s[i].subcode[k]);
			for(int l=1;l<sub;l++)
			scanf("%d",&s[i].mark[l]);
	        }
			/*for(i=0;i<)
			if(int i >=91)
			{
				
			}*/
		}
		
		printf("Student Details\n");
		printf("Name\tSubject Code\t\tSubject name\tmark\tgrade\t\n");
		for(int i=0;i<n;i++)
		{
			printf("%s\t",s[i].name);
			for(int j=0;j<6; j++){
			printf("%c\t",s[i].subcode[j]);
			printf("%s\t",s[i].subname);
			printf("%d\t",s[i].mark[j]);
		  }
		
		}
	}
	else
	{
		printf("Enter below 10 Values!");
	}
}