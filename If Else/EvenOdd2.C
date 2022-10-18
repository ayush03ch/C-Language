//WAP to check if a number is even and then calculating it's square else calculate it's square
#include <stdio.h>
int main()
{
	int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
      {printf("Square of given number is %d",num*num);}

    else if(num%2!=0)
    {printf("Cube of the given number is %d",num*num*num);}

    else {printf("error");}
return 0;
}