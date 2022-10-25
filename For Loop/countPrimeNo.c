//WAP to calculate all prime numbers in a given range
#include <stdio.h>
int main()
{
int a,b,i,flag,count=0;
printf("Enter Lower Limit: ");
scanf("%d",&a);
printf("Enter Upper Limit: ");
scanf("%d",&b);
printf("Prime Numbers between %d and %d : ",a,b);
while (a<b)
{
	flag = 0;
	for(i=2; i<=a/2;++i)
	{
		if(a%i == 0)
		{  flag = 1;  break;  }
	}
	if (flag == 0)
	{printf("%d ",a);
	count++;}
	++a;
}
printf("\nTotal number of Primes in givenr range is %d",count);
return 0;
}

