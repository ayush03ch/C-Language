//WAP to insert and delete elements at index specified by user
#include<stdio.h>

int main()
{
	int n, x, position;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	//input element and position for insertion
	printf("Enter element you want to insert: ");	
	scanf("%d",&x);
	printf("Position where you want to insert it: ");
	scanf("%d",&position);

	//increase array size
	n++;

	//loop to shift each element towards right
	for(int i=n-1;i>=position;i--)
		arr[i] = arr[i-1];

	//insert element
	arr[position-1] = x; 

	//print array
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	//input position for deletion
	printf("Position of element you want to delete: ");
	scanf("%d",&position);

	//shift elements towards left
	for(int i=position-1; i<n; i++)
		arr[i] = arr[i+1];
		
	//print array
	for(int i=0;i<n-1;i++)
		printf("%d ",arr[i]);
return 0;
}