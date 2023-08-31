//WAP to make a kite pattern using *
//total number of stars in one pattern is n(2n-2)+1 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows you want to print: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		for(int space=1; space<=(n-i); space++)
		printf("  ");

		for(int j=1; j<=2*i-1; j++)
		printf(" *");

        printf("\n");
	}
	for(int i=n-1; i>=1; i--)
	{
		for(int s=1; s<=(n-i);s++)
		printf("  ");

		for(int j=1; j<=(2*i-1); j++)
		printf(" *");

		printf("\n");
	}

return 0;
}