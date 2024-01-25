//WAP to count even number in an array of given order
#include<stdio.h>

int main()
{
	int n,count=0;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
	int ar[n][n];
	for(int i=0;i<n;i++)
	{
		printf("Enter elements of row %d : ",i+1);
		for(int j=0;j<n;j++)
			scanf("%d",&ar[i][j]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			if(ar[i][j]%2==0) count++;
	}
	printf("%d",count);
return 0;
}
