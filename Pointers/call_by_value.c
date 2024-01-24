//To understand concept of call by value
#include<stdio.h>
int fun(int a,int b)
{
	int c = a + b;
	a = 25;
	b = 86;
	return c;
}
int main()
{
int x = 10, y = 30;
	int c = fun(x,y);
	printf("sum of %d and %d is %d",x,y,c);
return 0;
}