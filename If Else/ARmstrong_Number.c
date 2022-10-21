//WAP to check if a number is armstrong number or not
#include <stdio.h>
#include<math.h>
int main()
{ 
	int k,l,m,n,c,n1,n2;
	printf("Enter a 3-digit number you want to check: ");
	scanf("%d",&n);

	m = n%10;
	n1 = n/10;
	l = n1%10;
	n2 = n1/10;
	k = n2%10;

    c = m*m*m + l*l*l + k*k*k;    //or by using <math.h> library and it's power function 

	if(c==n)
	printf("The number %d is an Armstrong number",c);

	else printf("The number %d is not a Armstrong number",n);

	return 0;
}
