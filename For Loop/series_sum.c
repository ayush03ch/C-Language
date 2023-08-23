//WAP to calculate sum of series 1 + (1/2) + (1/3) + (1/4) ....
#include<stdio.h>

int main()
{
float n,i,sum=0;
	printf("Enter limit: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
		sum += (1/i);
		printf("%f",sum);

return 0;
}
