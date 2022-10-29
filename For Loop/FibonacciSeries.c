//WAP to print Fibonacci series
#include<stdio.h>
int main()
{ 
	int a=0,b=1,n,i,sum=0;
	printf("Enter number : ");
	scanf("%d",&n);
    printf("0 1 ");
	for(i=2; i<=n; i++)
{	
    sum = a+b;
	printf(" %d ",sum);
	a = b;
    b = sum;
}
return 0;

	}
