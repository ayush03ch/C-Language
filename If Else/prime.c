//WAP to check whether given number is prime or not
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number you want to check: ");
	scanf("%d", &a);
	if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)
	{printf("Number is prime: ");}

	else if(a==2 || a==3 || a==5 || a==7)
	{printf("The number is prime: ");}

	else printf("The number is composite: ");
	return 0;
}
