//WAP to print table of any given number 
#include <stdio.h>
int main()
{ 
	int num,i;
	printf("Enter number whose table you want to print: ");
	scanf("%d",&num);
		for (i = 1; i <= 10; i++)
	{
		printf("%d \n", num*i);
	}
	

	return 0;
}