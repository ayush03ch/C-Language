//WAP to perform matrix operations 
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

	//code for addition
	printf("\nAddition Matrix: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
	        printf("%d ",c[i][j]); 
		}
		printf("\n");
	}

	//code for subtraction
	printf("\nSubtraction Matrix: \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j] - b[i][j];
	        printf("%d ",c[i][j]); 
		}
		printf("\n");
	}
	
	//code for multiplication
	printf("\nMultiplication Matrix: \n");
	for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
            c[i][j] += a[i][k]*b[k][j];
			printf("%d ",c[i][j]);
		}	
		printf("\n");
	}

return 0;
}


