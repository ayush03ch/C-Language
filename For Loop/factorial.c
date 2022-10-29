//WAP to calculate factorial of a number
#include<stdio.h>
int main()
{ 
	int i ,n , prod;
	i=1;prod=1;
	printf("Enter any number: ");
	scanf("%d",&n);

	for(prod=1 , i=1; i<=n; i++)
	{ 
		 prod = prod*i ;
	     i++;
	}	
	 printf("factorial of the number is %d",prod);
	return 0; 
}
