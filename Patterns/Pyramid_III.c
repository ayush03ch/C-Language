//WAP to make a Pyramid pattern 90 degree right
#include<stdio.h>
int main()
{ 
    int i,j,a;
    printf("Enter any side length: ");
    scanf("%d",&a);

  for(i=0;i<=a;i++)
  {
    for(j=0;j<i;j++)
    {
        printf(" *");
    } 
    printf("\n");                     
  }
  for(i=a-1;i>0;i--)
  {
    for(j=0;j<i;j++)
    {
        printf(" *");
    } 
    printf("\n");                     
  }
	
	return 0;
}