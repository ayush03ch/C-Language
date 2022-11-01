//WAP to print all armstrong numbers between 1 to 1000
#include<stdio.h>
#include<math.h>
int main()
{
int k,l,m,i,c,n1,n2;
for(i=1;i<=1000;i++)
    {
	    m = i%10;
	    n1 = i/10;
	    l = n1%10;
	    n2 = n1/10;
	    k = n2%10;

        c = m*m*m + l*l*l + k*k*k; 
		if(c==i)
		printf("%d\t",i);
	}
	
return 0;
}
