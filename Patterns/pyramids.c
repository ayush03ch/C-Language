//WAP to make a pyramid pattern using *
#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows you want to print: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		for(int j=1; j<=n; j++)
		{ if(j<=(n-i))
		   printf("  ");
		else
		   printf("  * ");}

        printf("\n");
	}
return 0;
}