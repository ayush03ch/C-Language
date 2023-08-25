//Simple temperature converter
#include<stdio.h>
int main()
{
  int t,k;
  float f,s;
  
  printf("Enter Temperature in Celsius: ");
  scanf("%d",&t);
  
  s = (1.8)*t;
  f = s+32;
  k = t+273;
  
  printf("Temperature in Fahrenheit = %f \n Kelvin = %d \n",f,k);
  
  return 0;
  } 
