//WAP a program to find Square Root of a given number using for loop
#include <stdio.h>
int main()
{   float num,a;
	printf("Enter a number to find its square root: ");
	scanf("%f", &num);
	for(a=1;num!=a*a;a++);
	printf("%f",a);
	
	return 0;
}