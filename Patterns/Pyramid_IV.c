//WAP to print inverted pyramid
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows you want to print: ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++)
	{
		for(int s=0; s<i; s++)
		printf(" ");

		for(int j=1; j<=(n-i+1); j++)
		printf("* ");

		printf("\n");
	}

	return 0;
}


 /* Can also be done like this

	for(int i=n; i>=1; i--)
	{
		for(int s=1; s<=(n-i);s++)
		printf(" ");

		for(int j=1; j<=(2*i-1); j++)
		printf("* ");

		printf("\n");
	}
	
*/	