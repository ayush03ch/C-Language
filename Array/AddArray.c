//WAP to do matrix addition of array
#include<stdio.h>

int main()
{
	int n;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];

	//input matrices
	printf("Enter elements of first matrix : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	      scanf("%d",&a[i][j]);
	}

	printf("Enter elements of second matrix : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	      scanf("%d",&b[i][j]);
	}

	//calculation
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
	        printf("%d ",c[i][j]); 
		}
		printf("\n");
	}

return 0;
}