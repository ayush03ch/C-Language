//WAP to count multiples of a given number in a given range
#include<stdio.h>

int main()
{
int num,n1,n2,count=0;
	printf("Enter Lower limit: ");
	scanf("%d",&n1);
	printf("Enter Upper limit: ");
	scanf("%d",&n2);
	printf("Enter the number whose multiple you want to count: ");
	scanf("%d",&num);
	for(int i=n1;i<=n2;i++)
	{
		if(i%num==0)
		count++;
	}
	printf("Total number of multiples of %d in range %d-->%d are: %d",num,n1,n2,count);
return 0;
}
