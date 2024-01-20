//WAP to make a pyramid pattern using *
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
return 0;
}