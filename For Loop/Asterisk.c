//program to multiply two numbers without using "*" operator

int main()
{
	int a,b,sum=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(b<0)
	{
		b = (-1)*b;
		for(int i=1;i<=b;i++)
			sum = sum + a;
			sum = (-1)*sum;
	}
	else		
	{	for(int i=1;i<=b;i++)
			sum = sum + a;  }
	printf("Product of given numbers is: %d",sum);
	return 0;
}
