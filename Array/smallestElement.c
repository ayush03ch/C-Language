//WAP to find smallest number in an array
#include<stdio.h>

int main()
{
int i,n,min; 
	printf("Enter limit: ");
	scanf("%d",&n);
int ar[n];
	min=ar[0];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=n;i++)
	   {
		if(min<ar[i])
		min=ar[i];
	   }
	   printf("%d",min);
 
return 0;
}
