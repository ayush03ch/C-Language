//WAP to print all numbers from 1 to 50, except multiple of a given number
#include<stdio.h>

int main()
{
int n;
printf("Enter the number whose multiple you don't want to print: ");
scanf("%d",&n);
	for(int i=1;i<=100;i++)
	{
		if(i%n==0) 
		continue;
		else printf("%d ",i);
	}
return 0;
}
