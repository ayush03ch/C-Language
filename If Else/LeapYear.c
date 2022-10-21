//WAP to check whether a given year is leap year or not
#include<stdio.h>
int main()
{
  int y;
  printf("Enter year you want to check: ");
  scanf("%d",&y);
  
  if(y%4==0 && y%100!=0)
     printf("%d is a Leap yeap\n",y);
  else if(y%400==0)
     printf("%d is a Leap yeap\n",y);
  else
     printf("%d is not a leap year\n",y);
return 0;
}
