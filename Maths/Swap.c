#include<stdio.h>
int main()
{
  int a,b,c,s;
  
  printf("Enter two values: "); 
  scanf("%d%d", &a,&b);
  printf("Swap values \n 1.using third variable \n 2.whithout using third variable \n ");
  scanf("%d",&s);
  
  if(s==1)
  {
   c = a;
   a = b;
   b = c;
   printf("a=%d b=%d" ,a,b);
  }
   
  else if(s==2)
  {
  a = a+b;
  b = a-b;
  a = a-b;
  printf("a=%d b=%d",a,b);
  }
  else printf("Error");
  return 0;
  }
  
  
