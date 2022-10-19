//WAP to print all numbers but skip odd numbers using continue 
#include<stdio.h>
int main()
{ 
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{   if(i%2!=0) 
		printf("%d \n",i);
        continue;}

return 0;
}
