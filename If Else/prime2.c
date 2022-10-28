#include <stdio.h>
int main()
{
	int a;
	printf("Enter limit: ");
	scanf("%d", &a);
	for(int i=0;i<=a;i++)
	if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
	{printf("%d \n",i);}
	
	else if(i==2 || i==3 || a==5 || i==7)
	{printf("%d \n",i);}


	return 0;
}
