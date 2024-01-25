//WAP to take values from user and store them in array and print
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter size: ");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
	}
	printf("Elements in array: ");
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);

	return 0;
}
