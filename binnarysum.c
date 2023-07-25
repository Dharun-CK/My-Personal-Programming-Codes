#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,sum=0 ;
    printf("Enter the Number:");
    scanf("%d",&i);
   while(i>0)
    {
      b=i%2;
      i=i/2;
      sum=sum+b;
    }
    printf("\nThe Count number is %d", sum);
    
    if(sum%2==0){
    printf("\nTHE BINARY NUMBER IS EVEN");
    }
    else{
    printf("\nTHE BINARY NUMBER IS ODD");
    }
return 0;      
} 
