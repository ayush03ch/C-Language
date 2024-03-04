#include <stdio.h>
int arraydigitsum(int a[], int, int);

int main()
{
	int s, i;
	printf("Enter size of array:");
	scanf("%d", &s);
	int a[s];
	printf("Elements of array: ");
	for (i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Sum of digit is: %d", arraydigitsum(a, 0, s));
	return 0;
}

int arraydigitsum(int a[], int i, int l)
{
	static int sum = 0;
	sum = sum + a[i];
	if (i >= (l - 1))
		return sum;
	else
		return arraydigitsum(a, i + 1, l);
}
