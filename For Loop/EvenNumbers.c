//WAP to print all even numbers form 1 to 100
#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
		printf("\n");
	}
return 0;	  
}
