//WAP to insert and delete element at given index
#include<stdio.h>

//function to insert element
void insert(int arr[],int n,int pos,int x)
{
	//loop to shift each element towards right
	for(int i=n-1;i>=pos;i--)
	arr[i] = arr[i-1];
	
	//insert element
	arr[pos-1] = x;

	//print array
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}



//function to delete element
void delete(int arr[],int n, int pos)
{
	//shift elements towards left
	for(int i=pos-1; i<n; i++)
		arr[i] = arr[i+1];

	//print array
	for(int i=0;i<n-1; i++)
		printf("%d",arr[i]);
}

//main function
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

	//insert element
	insert(arr,n, position,x);

	//input position for deletion
	printf("Position of element you want to delete: ");
	scanf("%d",&position);

	//delete element
	delete(arr,n, position);
return 0;
}