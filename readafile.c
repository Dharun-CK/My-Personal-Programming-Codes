#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char sen[10000];
	FILE *f1, *f;
	int n;
	char ch;
	f1 = fopen("News.doc","r");
	if(f1 == NULL)
	{
		printf("ERROR FILE IS NOT THERE!");
		exit(1);
    }
    
    printf("Content in The File:\n");
    do{
    	ch = fgetc(f1);
    	printf("%c",ch);
    }while(ch!=EOF);
    fclose(f1);
    getch();
	}
    