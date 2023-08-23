//WAP to calculate Sum of digits of a number given by the user
#include <stdio.h>
int main()
{
int n,d,Sum=0;
printf("Enter a number: ");
scanf("%d", &n); 

for(Sum=0 ; n>0;)
   { d = n%10; 
     Sum = Sum + d; 
	   n = n/10;
    }
	printf("%d", Sum);
return 0;
}