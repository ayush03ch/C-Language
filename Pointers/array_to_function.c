//wap to pass an array as argument in a function
#include<stdio.h>
void print_array(int ptr[], int n)
{
	for(int i=0;i<n;i++)
		printf("value of element %d is %d\n",i+1,ptr[i]);
}

// void print_array(int *ptr, int n)
// {	
// 	for(int i=0;i<n;i++)
// 	printf("value of element %d is %d\n",i+1,*(ptr+i));
// }

int main()
{
int ar[] = {1,2,56,22,39,12,98,4};
int n = sizeof(ar)/sizeof(ar[0]);	
print_array(ar,n);
return 0;
}