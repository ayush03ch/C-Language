//to understand the concept of call by reference
int fun(int *ptr1, int *ptr2)
{
	int c = *ptr1 + *ptr2;
	*ptr1 = 25;
	*ptr2 = 67;
	return c;
}

#include<stdio.h>

int main()
{
int x,y;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter value of y: ");
	scanf("%d",&y);
	printf("sum of given numebrs is %d",fun(&x,&y));
	printf("values after changing are %d and %d ",x,y);
return 0;
}