//WAP to count even numbers form 1 to 100
#include <stdio.h>
int main()
{
	int i,c=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			c++;
		}
	}
	printf("%d",c);
return 0;	  
}
