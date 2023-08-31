//WAP to print a square with a different border
#include<stdio.h>

int main()
{
int n,i,j;
	printf("Enter lenght of square: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			printf("$ ");
			else printf("* ");
		}
		printf("\n");
	}

return 0;
}