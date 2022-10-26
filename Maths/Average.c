#include <stdio.h>
int main()
{
	int i,j,k;
	float a,b;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &i,&j,&k);
	a = i+j+k;
	b = a/3;
	printf("average of given 3 numbers is %f",b);
return 0;
}
