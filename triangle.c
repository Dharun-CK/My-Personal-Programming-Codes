 #include<stdio.h>
 #include<math.h>
 
 int main()
 {
 	int x1,y1,x2,y2,x3,y3;
 	float x,y;
 	
 	scanf("\n%d",&x1);
	scanf("\n%d",&y1);
	
	
	getchar();
	
	
	scanf("\n%d",&x2);
	scanf("\n");
	scanf("\n%d",&y2);
	
	
	getchar();
	
	scanf("\n%d",&x3);
	scanf("\n%d",&y3);
	
	
 	x=(x1+x2+x3)/3.0;
 	y=(y1+y2+y3)/3.0;
 	printf("\n%.lf\n%.lf\n",x,y);
 	return 0;
}