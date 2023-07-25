#include<stdio.h>
#include<math.h>
int main()
{
	int t, wv;
	double wcf;
	
	printf("Enter The Temperature:");
	scanf("%d",&t);
	printf("Enter the Wind velocity:");
	scanf("%d",&wv);
	
	wcf = 35.74 + 0.6215*t + (0.4275*t-35.75) *pow(wv,0.16);
	printf("%.2lf\n",wcf);
	
	return 0;
}