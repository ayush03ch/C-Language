//WAP to check whether a number is divisible by 2 & 3 both or not
#include <stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
    if(a%2==0 && a%3==0)
	printf("The number is divisible by both 2 and 3");

	else if(a%2==0 && a%3!=0)
	printf("The number is divisible by 2 but not 3");
	
	
	else if(a%2!=0 && a%3==0)
	printf("The number is divisible by 3 but not 2");
	
	else printf("ERROR");
	return 0;}
