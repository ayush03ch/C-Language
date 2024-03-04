//to calculate summ of array elements using recursion
#include<stdio.h>
int arraysum(int arr[],int n)
{
	if(n<=0) return 0;
	else return arraysum(arr,n-1) + arr[n-1];
}

int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int m = arraysum(arr,n);
	printf("Sum of all elements in the array is %d",m);
return 0;
}
