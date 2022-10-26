//WAP to calculate number of years & months from Total days
#include<stdio.h>
int main()
{
  int y,d,r1,r2;
   printf("Enter number of Days: ");
   scanf("%d",&d);
   y = d/365;       // Total Days divided by 365
   r1 = d%365;      // if total days are not multiple of 365
   r2 = r1%30;      // if remaining days are not multiple of 30 , finding remainder   
     
   printf(" Years = %d \n Months = %d \n Days = %d \n",y,r1/30,r2);
   
   return 0;
   }  
