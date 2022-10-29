//WAP to check whether the given number is prime or not
#include<stdio.h>

int main()
{
int i,a,b=0;
printf("Enter a positive number you want to check: ");
scanf("%d",&a);
if(a==0 || a==1)
b=1;
	for(i=2;i<=(a/2);i++)
	{
		if(a%i==0)
		{b=1;
		break;}
	}
		if(b==1)
		printf("The number %d is not Prime\n",a);
		else
		printf("The number %d is Prime",a);
return 0;
}
