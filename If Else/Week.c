//WAP to print number of weeks, provided total number of days
#include <stdio.h>
int main()
{ 
int a,i,j,r;	
printf("Enter total number of days: ");
scanf("%d",&a);
i = a/7;
r = a%7;
j = (a-r)/7;
if (a%7==0)
	printf("Number of weeks = %d",i);	

else if(a%7!=0)
    printf("number of weeks = %d and %d days",j,r);

else printf("Error");

return 0;
}
