//WAP to reverse an array
#include<stdio.h>
void reverse(int *arr,int n)
{	
	for(int i=0;i<n/2;i++)
	{ 	
		int temp = arr[i];
	  	arr[i] = arr[n-i-1];
	  	arr[n-i-1] = temp;
	}
	printf("Reverse array is ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
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
		
	reverse(arr,n);
	return 0;
}
