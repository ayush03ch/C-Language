//WAP to print all armstrong numbers between 1 to n
#include<stdio.h>
#include<math.h>


int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int num,m;
	for(int i=1;i<=n;i++)
	{
		int s=0,count=0;

		num = i;
		while(num!=0)
		{
			num=num/10;
			count++;
		}

		num=i;
		while(num!=0)
		{
			m=num%10;
			s = s + (double)pow(m,count);
			num = num/10;
		}

		if(i==s)
		printf("%d ",s);
	}
		return 0;
}


