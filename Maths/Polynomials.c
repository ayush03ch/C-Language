// WAP to represent two polynomials as arrays & multiply them
#include <stdio.h>

int main()
{
	int n, m;
	// first polynomial
	printf("Enter degree of first polynomial: ");
	scanf("%d", &n);
	n += 1;
	int p1[n];
	printf("Enter coefficients of first polynomial: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &p1[i]);

	// second polynomial
	printf("Enter degree of second polynomial: ");
	scanf("%d", &m);
	int p2[m];
	printf("Enter coefficients of second polynomial: ");
	for (int j = 0; j < m; j++)
		scanf("%d", &p2[j]);

	// multiplication
	int prod[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			prod[i][j] = p1[i] * p2[j];
			printf("%d*%d = ", p1[i], p2[j]);
			printf("%d    ", prod[i][j]);
		}
		printf("\n");
	}

	// addition
	int p3[m + n];
	for (int k = 0; k < (n + m); k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (i + j == k)
					p3[k] += prod[i][j];
			}
		}
	}

	// output
	printf("Equation: ");
	for (int k = 0; k < (n + m); k++)
	{
		printf("(%d)x^%d", p3[k], (n + m - k));
	}
	return 0;
}
